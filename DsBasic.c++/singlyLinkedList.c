#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *link;
    };

    struct node *head=0, *newnode, *temp;
    int choice;
    printf("do you want to next node\n");
    scanf("%d", &choice);
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data\n");
        scanf("%d", &newnode->data);
        newnode->link = 0;

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->link = newnode;
            temp = newnode;
        }
        printf("do you want to next node\n");
        scanf("%d", &choice);
    }

    temp=head;
    printf("your node is ");
    while (temp!= 0)
    {
        printf(" %d",temp->data);
        temp = temp->link;
    }
    
}