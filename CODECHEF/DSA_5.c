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

struct node *insertatbegining(struct node *head,int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
    
}

struct node *insertatindex(struct node *head,int data,int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
     
    ptr->data = data;
    while(i!=index-1)
    {
        p= p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
    
}

struct node *insertatend(struct node *head,int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    
    while(p->next!=NULL)
    {
        p = p->next;
        
    }
    ptr->data = data;
    ptr->next = NULL;
    p->next = ptr;
    return head;
    
}

struct node *insertafternode(struct node *head,struct node *previousnode,int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = previousnode->next;
    previousnode->next = ptr;
    return head;
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
        printf("Linkedlist before insertion\n");
        linkedlistdisplay(head);

        printf("\nLinkedlist after insertion\n");
        //head = insertatbegining(head,101);
        //head = insertatindex(head,101,1);
        //head = insertatend(head,101);
        head = insertafternode(head,second,101);
        linkedlistdisplay(head);





        return 0;
    }
