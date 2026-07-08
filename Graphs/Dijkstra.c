#include <stdio.h>

#define V 4

int main()
{
    int graph[V][V] =
    {
        {0, 1, 4, 0},
        {1, 0, 2, 5},
        {4, 2, 0, 1},
        {0, 5, 1, 0}
    };

    int distance[V];
    int visited[V];

    for(int i = 0; i < V; i++)
    {
        distance[i] = 9999;
        visited[i] = 0;
    }

    distance[0] = 0;

    for(int count = 0; count < V - 1; count++)
    {
        int min = 9999;
        int u = -1;

        for(int i = 0; i < V; i++)
        {
            if(!visited[i] && distance[i] < min)
            {
                min = distance[i];
                u = i;
            }
        }

        visited[u] = 1;

        for(int v = 0; v < V; v++)
        {
            if(graph[u][v] &&
               !visited[v] &&
               distance[u] + graph[u][v] < distance[v])
            {
                distance[v] = distance[u] + graph[u][v];
            }
        }
    }

    printf("Shortest Distances from Vertex 0:\n");

    for(int i = 0; i < V; i++)
    {
        printf("Vertex %d = %d\n", i, distance[i]);
    }

    return 0;
}
