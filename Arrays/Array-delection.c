#include <stdio.h>

int main()
{
    int arr[100], n, pos, i;

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    printf("Enter Elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter Position To Delete: ");
    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array After Deletion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
