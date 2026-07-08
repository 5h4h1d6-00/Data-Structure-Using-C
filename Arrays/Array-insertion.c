#include <stdio.h>

int main()
{
    int arr[100], n, pos, value, i;

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    printf("Enter Elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter Position: ");
    scanf("%d", &pos);

    printf("Enter Value: ");
    scanf("%d", &value);

    for(i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    printf("Array After Insertion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
