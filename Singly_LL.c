#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    struct node{
        int data;
        struct node *next;
    };
    struct node *head,*newnode,*temp;
    int choice=1;
    head=0;
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to continue");
        scanf("%d",&choice);
    }
    temp=head;
    while(temp!=0){
        printf("%d",temp->data);
        temp=temp->next;
    }
    return 0;
}