#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *head)
{
    while(head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *head, *second, *newNode;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    newNode = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 30;
    second->next = NULL;

    printf("Before Insertion:\n");
    display(head);

    newNode->data = 20;
    newNode->next = second;
    head->next = newNode;

    printf("After Insertion:\n");
    display(head);

    return 0;
}
