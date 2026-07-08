
#include <stdio.h>

int queue[5];
int front = -1;
int rear = -1;

int main()
{
    int choice, value, i;

    while(1)
    {
        printf("\n1.Insert");
        printf("\n2.Delete");
        printf("\n3.Display");
        printf("\n4.Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            if(rear == 4)
            {
                printf("Queue Full");
            }
            else
            {
                printf("Enter Value: ");
                scanf("%d", &value);

                if(front == -1)
                {
                    front = 0;
                }

                rear++;
                queue[rear] = value;
            }
        }

        else if(choice == 2)
        {
            if(front == -1 || front > rear)
            {
                printf("Queue Empty");
            }
            else
            {
                printf("Deleted = %d", queue[front]);
                front++;
            }
        }

        else if(choice == 3)
        {
            if(front == -1 || front > rear)
            {
                printf("Queue Empty");
            }
            else
            {
                for(i = front; i <= rear; i++)
                {
                    printf("%d ", queue[i]);
                }
            }
        }

        else if(choice == 4)
        {
            break;
        }
    }

    return 0;
}
