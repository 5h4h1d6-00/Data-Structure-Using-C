#include <stdio.h>

int graph[4][4] =
{
    {0,1,1,0},
    {1,0,1,1},
    {1,1,0,0},
    {0,1,0,0}
};

int visited[4] = {0};

void DFS(int vertex)
{
    visited[vertex] = 1;

    printf("%d ", vertex);

    for(int i = 0; i < 4; i++)
    {
        if(graph[vertex][i] == 1 && visited[i] == 0)
        {
            DFS(i);
        }
    }
}

int main()
{
    printf("DFS Traversal: ");

    DFS(0);

    return 0;
}
