#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *first, *second, *third;

    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = first;

    struct Node *ptr = first;

    printf("Circular Linked List:\n");

    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    while(ptr != first);

    return 0;
}
