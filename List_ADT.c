#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* head = NULL;

void Insertfirst(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    if(head==NULL){
        newNode->next = NULL;
        head = newNode;
    }
    else{
    newNode->next = head;
    head = newNode;  
    }

}

void Display(){
    struct Node* temp = head;
    if(temp==NULL){
        printf("List is empty now..!\n");
    }

    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void InsertAtPos(int pos,int data){
    if(pos<0){
        printf("Invalid posistion");
        return;
    }
    else{
        struct Node* temp = head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                printf("out of list boundry");
                return;
            }
            temp = temp->next;
        }

        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void DeleteAtPos(int pos){
    struct Node* temp = head;
    struct Node* prev = NULL;

    for(int i=0;i<pos-1;i++){
        prev = temp;
        temp = temp->next;
    }

    if(temp==NULL){
        printf("List out of boundry");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

int main(){

    int data,choice,pos;
    
    while(1){
        printf("\n----------------------------------\n");
        printf("1.Insertfist\n2.Display\n3.Insert at a posistion\n4.Delete from a posistion\n5.exit now.\n");
        printf("Enter your choice: \n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("Enter the data: \n");
                scanf("%d",&data);
                Insertfirst(data);
                break;

            case 2:
                Display();
                break;

            case 3:
                printf("posistion starts from 0\n");
                printf("Enter the position:\n");
                scanf("%d",&pos); 
                printf("Enter the data: \n");
                scanf("%d",&data);
                if(pos==0){
                   Insertfirst(data); 
                }
                else{
                    InsertAtPos(pos,data);
                }
                break;

            case 4:
                printf("posistion starts from 0\n");
                printf("Enter the posistion to delete:\n");
                scanf("%d",&pos);
                if(pos<0){
                    printf("invalid posostion");
                }else{
                DeleteAtPos(pos);
                }
                break;

            case 5:
                printf("program terminated...404\n---------------------------------------");
                exit(0);

            default:
                printf("Invalid choice!....");
        }
    }
}