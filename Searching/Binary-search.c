#include <stdio.h>

int main()
{
    int arr[100], n, item;
    int low, high, mid;
    int found = 0;
    int i;

    printf("Enter Size: ");
    scanf("%d", &n);

    printf("Enter Sorted Elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter Element To Search: ");
    scanf("%d", &item);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == item)
        {
            printf("Element Found At Position %d", mid + 1);
            found = 1;
            break;
        }
        else if(item > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 0)
    {
        printf("Element Not Found");
    }

    return 0;
}
