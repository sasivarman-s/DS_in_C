#include <stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *left;
    struct Node *right;
} Treenode;

Treenode* createNode (int val){
    Treenode *newnode = (Treenode*)malloc(sizeof(Treenode));
    newnode-> data = val;
    newnode->left = NULL;
    newnode->right = NULL;
    
    return newnode;
}

int main()
{
    printf("tree...");
    Treenode *root = createNode(0);
    root->left = createNode(1);
    root->right = createNode(2);
    root->right->right = createNode(3);
    printf("\nroot is %d",root->data);
    printf("\nleft node of root is %d",root->left->data);
    printf("\nright node of root is %d",root->right->data);
    printf("\nnode on the right of the right is %d",root->right->right->data);
    
}