#include <stdio.h>

int main()
{
    int arr[100], n, item, i, found = 0;

    printf("Enter Size: ");
    scanf("%d", &n);

    printf("Enter Elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter Element To Search: ");
    scanf("%d", &item);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == item)
        {
            printf("Element Found At Position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element Not Found");
    }

    return 0;
}
