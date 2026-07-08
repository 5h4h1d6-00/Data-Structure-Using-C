#include <stdio.h>
// Stack Operations
int stack[5];
int top = -1;

int main()
{
    int choice, value, i;

    while(1)
    {
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Display");
        printf("\n4.Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            if(top == 4)
            {
                printf("Stack Overflow");
            }
            else
            {
                printf("Enter Value: ");
                scanf("%d", &value);

                top++;
                stack[top] = value;
            }
        }

        else if(choice == 2)
        {
            if(top == -1)
            {
                printf("Stack Underflow");
            }
            else
            {
                printf("Deleted = %d", stack[top]);
                top--;
            }
        }

        else if(choice == 3)
        {
            for(i = top; i >= 0; i--)
            {
                printf("%d\n", stack[i]);
            }
        }

        else if(choice == 4)
        {
            break;
        }
    }

    return 0;
}
