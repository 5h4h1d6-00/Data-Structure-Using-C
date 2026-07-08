
#include <stdio.h>
#include <string.h>

char stack[100];
int top = -1;

void push(char ch)
{
    stack[++top] = ch;
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
    char infix[100], temp[100], prefix[100];
    int i, j = 0, len;

    printf("Enter Infix Expression: ");
    scanf("%s", infix);

    strrev(infix);

    len = strlen(infix);

    for(i = 0; i < len; i++)
    {
        if(infix[i] == '(')
            infix[i] = ')';
        else if(infix[i] == ')')
            infix[i] = '(';
    }

    for(i = 0; infix[i] != '\0'; i++)
    {
        char ch = infix[i];

        if((ch >= 'A' && ch <= 'Z') ||
           (ch >= 'a' && ch <= 'z'))
        {
            temp[j++] = ch;
        }

        else if(ch == '(')
        {
            push(ch);
        }

        else if(ch == ')')
        {
            while(stack[top] != '(')
            {
                temp[j++] = pop();
            }

            pop();
        }

        else
        {
            while(top != -1 &&
                  precedence(stack[top]) >= precedence(ch))
            {
                temp[j++] = pop();
            }

            push(ch);
        }
    }

    while(top != -1)
    {
        temp[j++] = pop();
    }

    temp[j] = '\0';

    strrev(temp);

    strcpy(prefix, temp);

    printf("Prefix Expression = %s", prefix);

    return 0;
}
