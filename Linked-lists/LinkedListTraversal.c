#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traverse(struct Node *ptr)
{
    while(ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *n1;
    struct Node *n2;

    head = (struct Node*)malloc(sizeof(struct Node));
    n1 = (struct Node*)malloc(sizeof(struct Node));
    n2 = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = n1;

    n1->data = 20;
    n1->next = n2;

    n2->data = 30;
    n2->next = NULL;

    printf("Linked List Elements:\n");

    traverse(head);

    return 0;
}
