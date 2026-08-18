#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main(){
    // creating a simple nodes and connecting them through pointer!
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;
    printf("%d\n",head->data); //output: 10

    //another node
    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 20;
    current->link = NULL;
    head->link = current;
    printf("%d\n",head->link->data); //output: 20

    // the final output will be showed as 10 20 on output screen.
}