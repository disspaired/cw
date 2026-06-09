1
using System;
using System.Collections.Generic;

public class Graph
{
    private int vertexCount;
    private List<int>[] adjacencyList;

    public Graph(int vertexCount)
    {
        this.vertexCount = vertexCount;
        adjacencyList = new List<int>[vertexCount];
        for (int i = 0; i < vertexCount; i++)
        {
            adjacencyList[i] = new List<int>();
        }
    }

    public void AddEdge(int v, int w)
    {
        adjacencyList[v].Add(w);
        adjacencyList[w].Add(v);
    }

    public List<int> GetNeighbors(int vertex)
    {
        return adjacencyList[vertex];
    }

    public int VertexCount => vertexCount;
}

2
static Graph GenerateRandomGraph(int vertexCount, double edgeProbability = 0.01)
{
    var graph = new Graph(vertexCount);
    var random = new Random();

    for (int i = 0; i < vertexCount; i++)
    {
        for (int j = i + 1; j < vertexCount; j++)
        {
            if (random.NextDouble() < edgeProbability)
            {
                graph.AddEdge(i, j);
            }
        }
    }

    return graph;
}

Graph graph = GenerateRandomGraph(1000, 0.01);

3
static void DepthFirstSearch(Graph graph, int startVertex)
{
    bool[] visited = new bool[graph.VertexCount];
    Stack<int> stack = new Stack<int>();

    stack.Push(startVertex);

    Console.WriteLine("Обход в глубину (DFS) начиная с вершины " + startVertex + ":");

    while (stack.Count > 0)
    {
        int currentVertex = stack.Pop();

        if (!visited[currentVertex])
        {
            visited[currentVertex] = true;
            Console.Write(currentVertex + " ");

            foreach (int neighbor in graph.GetNeighbors(currentVertex))
            {
                if (!visited[neighbor])
                {
                    stack.Push(neighbor);
                }
            }
        }
    }
    Console.WriteLine();
}

using System;
using System.Collections.Generic;

public class Graph
{
    private int vertexCount;
    private List<int>[] adjacencyList;

    public Graph(int vertexCount)
    {
        this.vertexCount = vertexCount;
        adjacencyList = new List<int>[vertexCount];
        for (int i = 0; i < vertexCount; i++)
        {
            adjacencyList[i] = new List<int>();
        }
    }

    public void AddEdge(int v, int w)
    {
        adjacencyList[v].Add(w);
        adjacencyList[w].Add(v);
    }

    public List<int> GetNeighbors(int vertex)
    {
        return adjacencyList[vertex];
    }

    public int VertexCount => vertexCount;

    public void BreadthFirstSearch(int startVertex)
    {
        bool[] visited = new bool[vertexCount];
        Queue<int> queue = new Queue<int>();

        visited[startVertex] = true;
        queue.Enqueue(startVertex);

        Console.WriteLine("Обход в ширину (BFS) начиная с вершины " + startVertex + ":");

        while (queue.Count > 0)
        {
            int currentVertex = queue.Dequeue();
            Console.Write(currentVertex + " ");

            foreach (int neighbor in adjacencyList[currentVertex])
            {
                if (!visited[neighbor])
                {
                    visited[neighbor] = true;
                    queue.Enqueue(neighbor);
                }
            }
        }
        Console.WriteLine();
    }
}

static Graph GenerateRandomGraph(int vertexCount, double edgeProbability = 0.01)
{
    var graph = new Graph(vertexCount);
    var random = new Random();

    for (int i = 0; i < vertexCount; i++)
    {
        for (int j = i + 1; j < vertexCount; j++)
        {
            if (random.NextDouble() < edgeProbability)
            {
                graph.AddEdge(i, j);
            }
        }
    }

    return graph;
}

class Program
{
    static void Main()
    {
        Graph graph = GenerateRandomGraph(1000, 0.01);

        graph.BreadthFirstSearch(0);

        Console.ReadLine();
    }
}
