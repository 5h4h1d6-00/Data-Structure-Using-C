#include <stdio.h>

int main()
{
    int graph[3][3] =
    {
        {0, 1, 1},
        {1, 0, 1},
        {1, 1, 0}
    };

    int i, j;

    printf("Adjacency Matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    return 0;
}
