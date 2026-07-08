#include <stdio.h>

int main()
{
    int graph[4][4] =
    {
        {0,1,1,0},
        {1,0,1,1},
        {1,1,0,0},
        {0,1,0,0}
    };

    int queue[10];
    int visited[4] = {0};

    int front = 0;
    int rear = 0;
    int start = 0;

    visited[start] = 1;
    queue[rear++] = start;

    printf("BFS Traversal: ");

    while(front < rear)
    {
        int current = queue[front++];

        printf("%d ", current);

        for(int i = 0; i < 4; i++)
        {
            if(graph[current][i] == 1 && visited[i] == 0)
            {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }

    return 0;
}
