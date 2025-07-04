#include <stdio.h>
#include <stdlib.h>

int main() {
    struct node {
        int data;
        struct node *next;
    };

    struct node *head = 0, *newnode, *temp, *prev;
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
    printf("Enter position to delete: ");
    scanf("%d", &pos);

    temp = head;

    if (pos == 1) {
        
        head = head->next;
        free(temp);
    } else {
        
        while (i < pos && temp != NULL) {
            prev = temp;
            temp = temp->next;
            i++;
        }

        if (temp == NULL) {
            printf("Position out of range!\n");
        } else {
            prev->next = temp->next;
            free(temp);
        }
    }

    
    printf("Linked list after deletion: ");
    temp = head;
    while (temp != 0) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
