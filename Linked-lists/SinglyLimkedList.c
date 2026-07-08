#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL;
    struct Node *first = NULL;
    struct Node *second = NULL;

    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = NULL;

    head = first;

    printf("Linked List:\n");

    while(head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }

    printf("NULL");

    return 0;
}
