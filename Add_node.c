#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void Add_node(struct node *head,int data){
    struct node *ptr,*temp;
    ptr = head;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    while(ptr->link!=NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
    printf("the value in the appended to linked list is %d",ptr->link->data);
}

int main()
{
    int data;
    // counts the total nodes in this program by 1st method using while loop
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 20;
    current->link = NULL;
    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 30;
    current->link = NULL;
    head->link->link = current;
    printf("Enter the data you want insert at linked list: ");
    scanf("%d",&data);

    Add_node(head,data);
}