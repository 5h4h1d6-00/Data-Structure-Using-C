#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

void inorder(struct Node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct Node *root)
{
    if(root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct Node *root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    struct Node *root;

    root = (struct Node*)malloc(sizeof(struct Node));

    root->data = 10;
    root->left = NULL;
    root->right = NULL;

    printf("Inorder Traversal:\n");
    inorder(root);

    printf("\n\nPreorder Traversal:\n");
    preorder(root);

    printf("\n\nPostorder Traversal:\n");
    postorder(root);

    return 0;
}
