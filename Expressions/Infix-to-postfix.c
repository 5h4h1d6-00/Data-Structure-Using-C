#include <stdio.h>
#include <string.h>

char stack[100];
int top = -1;

void push(char ch)
{
    top++;
    stack[top] = ch;
}

char pop()
{
    return stack[top--];
}

int precedence(char ch)
{
    if(ch == '+' || ch == '-')
        return 1;

    if(ch == '*' || ch == '/')
        return 2;

    if(ch == '^')
        return 3;

    return 0;
}

int main()
{
    char infix[100], postfix[100];
    int i, j = 0;

    printf("Enter Infix Expression: ");
    scanf("%s", infix);

    for(i = 0; infix[i] != '\0'; i++)
    {
        char ch = infix[i];

        if((ch >= 'A' && ch <= 'Z') ||
           (ch >= 'a' && ch <= 'z') ||
           (ch >= '0' && ch <= '9'))
        {
            postfix[j++] = ch;
        }

        else if(ch == '(')
        {
            push(ch);
        }

        else if(ch == ')')
        {
            while(stack[top] != '(')
            {
                postfix[j++] = pop();
            }

            pop();
        }

        else
        {
            while(top != -1 &&
                  precedence(stack[top]) >= precedence(ch))
            {
                postfix[j++] = pop();
            }

            push(ch);
        }
    }

    while(top != -1)
    {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';

    printf("Postfix Expression = %s", postfix);

    return 0;
}
