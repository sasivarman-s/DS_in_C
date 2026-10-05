#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} Treenode;

Treenode *createNode(int val)
{
    Treenode *newnode = (Treenode *)malloc(sizeof(Treenode));
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

Treenode *insert(Treenode *root, int val)
{
    if (root == NULL)
    {
        return createNode(val);
    }

    if (root->data > val)
    {
        root->left = insert(root->left, val);
    }
    else
    {
        root->right = insert(root->right, val);
    }

    return root;
}

int main()
{
    printf("tree...");
    Treenode *root = NULL;
    root = insert(root, 2);
    root = insert(root, 1);
    root = insert(root, 3);

    printf("%d", root->data);
}