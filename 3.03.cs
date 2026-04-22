using System;
using System.Collections.Generic;

class Program
{
    static Dictionary<string, List<string>> graph = new Dictionary<string, List<string>>();

    static HashSet<string> visited = new HashSet<string>();

    static void Main()
    {

        InitializeGraph();

        bool pathExists = DFS("A", "F");

        if (pathExists)
        {
            Console.WriteLine("Путь найден");
        }
        else
        {
            Console.WriteLine("Путь не найден");
        }
    }

    static void InitializeGraph()
    {
        graph["A"] = new List<string> { "B", "C" }; 
        graph["B"] = new List<string> { "D", "E" };
        graph["C"] = new List<string>();  
        graph["E"] = new List<string>();        
        graph["F"] = new List<string>(); 
    }

    static bool DFS(string current, string target)
    {
        if (current == target)
        {
            return true;
        }
      
        visited.Add(current);
        if (graph.ContainsKey(current))
        {
            foreach (string neighbor in graph[current])
            {
                if (!visited.Contains(neighbor))
                {
                    if (DFS(neighbor, target))
                    {
                        return true;
                    }
                }
            }
        }

        return false;
    }
}






using System;
using System.Collections.Generic;

class Program
{
    class Edge
    {
        public string To; 
        public int Weight;
        
        public Edge(string to, int weight)
        {
            To = to;
            Weight = weight;
        }
    }

    static Dictionary<string, List<Edge>> graph = new Dictionary<string, List<Edge>>();

    static void Main()
    {
        InitializeGraph();

        var distances = Dijkstra("A");

        foreach (var node in new[] { "A", "B", "C", "D" })
        {
            Console.WriteLine($"{node} = {distances[node]}");
        }
    }

    static void InitializeGraph()
    {
        graph["A"] = new List<Edge>
        { 
            new Edge("B", 2),
            new Edge("C", 5)
        };
        
        graph["B"] = new List<Edge>
        { 
            new Edge("C", 1)
        };
        
        graph["C"] = new List<Edge>
        { 
            new Edge("D", 3)
        };

        if (!graph.ContainsKey("D"))
            graph["D"] = new List<Edge>();
    }

    static Dictionary<string, int> Dijkstra(string start)
    {
        var distances = new Dictionary<string, int>();

        foreach (var node in graph.Keys)
        {
            distances[node] = int.MaxValue;
        }

        distances[start] = 0;

        var priorityQueue = new PriorityQueue<string, int>();
        priorityQueue.Enqueue(start, 0);

        while (priorityQueue.Count > 0)
        {
            priorityQueue.Dequeue(out string currentNode, out int currentDistance);

            if (currentDistance > distances[currentNode])
                continue;
            foreach (var edge in graph[currentNode])
            {
                int newDistance = distances[currentNode] + edge.Weight;

                if (newDistance < distances[edge.To])
                {
                    distances[edge.To] = newDistance;
                    priorityQueue.Enqueue(edge.To, newDistance);
                }
            }
        }

        return distances;
    }
}
