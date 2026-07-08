#include <stdio.h>

int stack[100];
int top = -1;

void push(int value)
{
    top++;
    stack[top] = value;
}

int pop()
{
    int value;
    value = stack[top];
    top--;
    return value;
}

int main()
{
    char postfix[100];
    int i;
    int a, b;

    printf("Enter Postfix Expression: ");
    scanf("%s", postfix);

    for(i = 0; postfix[i] != '\0'; i++)
    {
        if(postfix[i] >= '0' && postfix[i] <= '9')
        {
            push(postfix[i] - '0');
        }
        else
        {
            b = pop();
            a = pop();

            if(postfix[i] == '+')
            {
                push(a + b);
            }
            else if(postfix[i] == '-')
            {
                push(a - b);
            }
            else if(postfix[i] == '*')
            {
                push(a * b);
            }
            else if(postfix[i] == '/')
            {
                push(a / b);
            }
        }
    }

    printf("Result = %d", pop());

    return 0;
}
