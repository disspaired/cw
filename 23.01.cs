using System;


class MatrixOperations
{
    public static double FindMaxElement(double[, ] matrix, int M, int N)
    {
        double max = matrix[0, 0];
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (matrix[i, j] > max)
                {
                    max = matrix[i, j];
                }
            }
        }
        return max;
    }

    public static double FindMaxAmongRowMinima(double[, ] matrix, int M, int N)
    {
        double[] rowMinima = new double[M];

        for (int i = 0; i < M; i++)
        {
            double min = matrix[i, 0];
            for (int j = 1; j < N; j++)
            {
                if (matrix[i, j] < min)
                {
                    min = matrix[i, j];
                }
            }
            rowMinima[i] = min;
        }

        double maxAmongMinima = rowMinima[0];
        for (int k = 1; k < M; k++)
        {
            if (rowMinima[k] > maxAmongMinima)
            {
                maxAmongMinima = rowMinima[k];
            }
        }

        return maxAmongMinima;
    }
}
