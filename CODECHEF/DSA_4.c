#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void linkedlistdisplay(struct node *ptr)
{
    while(ptr != NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr = ptr->next; 
    }
}
int main()
    {
        struct node *head;
        struct node *first;
        struct node *second;
        struct node *third;

        //Allocate memory for nodes in linkedlist in Heap.
         head = (struct node *)malloc(sizeof(struct node));
         first = (struct node *)malloc(sizeof(struct node));
         second = (struct node *)malloc(sizeof(struct node));
         third = (struct node *)malloc(sizeof(struct node));
        
        //Link head and first node
        head->data = 7;
        head->next = first;
        
        //Link first and second node
        first->data = 11;
        first->next = second;
        
        //Link second and third node.
        second->data = 41;
        second->next = third;
        
        // Terminate the list at the third node.
        third->data = 66;
        third->next = NULL;

        linkedlistdisplay(head);



        return 0;
    }
