#include <stdio.h>
#include <stdlib.h>

int main() {
    struct node {
        int data;
        struct node *next;
    };

    struct node *head = 0, *newnode, *temp;
    int choice = 1;

    
    while (choice) {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if (head == 0) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue (1/0)? ");
        scanf("%d", &choice);
    }

    
    int pos, i = 1;
    printf("Enter position to insert a new node: ");
    scanf("%d", &pos);

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data to insert at position %d: ", pos);
    scanf("%d", &newnode->data);
    newnode->next = 0;

    if (pos == 1) {
        
        newnode->next = head;
        head = newnode;
    } else {
        
        temp = head;
        while (i < pos - 1 && temp != 0) {
            temp = temp->next;
            i++;
        }

        if (temp == 0) {
            printf("Position out of range!\n");
        } else {
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }

    
    printf("Linked list after insertion: ");
    temp = head;
    while (temp != 0) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
