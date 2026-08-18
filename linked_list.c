#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main(){
    // creating 3 nodes and connecting through pointers
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;
    printf("%d\n",head->data); //1st node along with header

    struct node *current = (struct node *)malloc(sizeof(struct node)); // 2nd node
    current->data =20;
    current->link = NULL;
    head->link = current; // linking 2nd node to 1st node
    printf("%d\n", head->link->data);

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 30;
    current->link = NULL;
    head->link->link = current; // linking 3rd node to 2nd node
    printf("%d\n", head->link->link->data);

    //final output on screen as 10 20 30
}