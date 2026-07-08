#include <stdio.h>
#include <string.h>

int stack[100];
int top = -1;

void push(int value)
{
    stack[++top] = value;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char prefix[100];
    int i, a, b;

    printf("Enter Prefix Expression: ");
    scanf("%s", prefix);

    for(i = strlen(prefix) - 1; i >= 0; i--)
    {
        if(prefix[i] >= '0' && prefix[i] <= '9')
        {
            push(prefix[i] - '0');
        }
        else
        {
            a = pop();
            b = pop();

            if(prefix[i] == '+')
                push(a + b);

            else if(prefix[i] == '-')
                push(a - b);

            else if(prefix[i] == '*')
                push(a * b);

            else if(prefix[i] == '/')
                push(a / b);
        }
    }

    printf("Result = %d", pop());

    return 0;
}
