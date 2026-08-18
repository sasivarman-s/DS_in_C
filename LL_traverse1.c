#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void count_node(struct node *head)
{
    if (head == NULL)
    {
        printf("linked list is empty!");
    }
    int count = 0;
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        count = count + 1;
        ptr = ptr->link;
    };
    printf("The total nodes are %d", count);
};

int main()
{
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
    head->link->link= current;

    count_node(head);
}