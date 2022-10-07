#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
int insertend(int data)
{
    struct node *temp;
    temp = head;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        return 0;
    }
}
int insertbefore()
{
    int count = 0, i = 1, pos, data;
    printf("Enter the position before which you want to add: ");
    scanf("%d", &pos);
    if(pos==1)
    {
        printf("Wrong Option Selected !!!");
        return 0;
    }
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data to be inserted: ");
    scanf("%d", &newnode->data);
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    temp = head;
    if (pos > count)
    {
        printf("Enter correct position");
        return 0;
    }
    else
    {
        while (++i < pos)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
    return 0;
}
void insert_beginning()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data to be inserted at beginning: ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
}
void insertafter()
{
    int pos, i = 1;
    struct node *temp = head;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the position after which you want to add the data: ");
    scanf("%d", &pos);
    printf("Enter the data to be inserted: ");
    scanf("%d", &newnode->data);
    while (i < pos)
    {
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void insert_middle()
{
    int count = 0, i = 1;
    struct node *temp = head;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data to be inserted at middle: ");
    scanf("%d", &newnode->data);
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    int pos = count / 2;
    temp = head;
    while (i < pos)
    {
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void deletenode()
{
    int pos, i = 1;
    struct node *temp = head;
    struct node *fordeleting;
    printf("All node are: ");
    displayData();
    printf("\nEnter the position from where you want to delete the node: ");
    scanf("%d", &pos);
    while (++i < pos)
    {
        temp = temp->next;
    }
    fordeleting= temp->next;
    temp->next = temp->next->next;
    free(fordeleting);
    printf("Node deleted Successfully!!!");
}
void search_element()
{
    int search,i=0,flag=0;
    struct node *temp=head;
    printf("Enter Element to be searched in linked list: ");
    scanf("%d",&search);
    while(temp!=NULL)
    {   
        i++;
        if(temp->data==search)
        {
            flag=1;
            break;
        }
        temp=temp->next;
    }
    if(flag==0)
    printf("Element not found in the linked list");
    else
    printf("Element found at %d index",i);
}
void displayData()  
{
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void delete_duplicate()
{
    struct node *ptr1, *ptr2, *dup;
    ptr1 = head;
    ptr2=head;
 
    /* Pick elements one by one */
    while (ptr1 != NULL) {
        ptr2 = ptr1;
 
        /* Compare the picked element with rest
           of the elements */
        while (ptr2!= NULL) {
            /* If duplicate then delete it */
            if (ptr1->data == ptr2->next->data) {
                /* sequence of steps is important here */
                ptr2->next = ptr2->next->next;
                // free (dup);
            }
            else /* This is tricky */
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}
int main()
{
    int data;
    char choice = 'y';
    int ans;
    while (choice == 'y')
    {
        printf("1. Insert at end\n");
        printf("2. Insert at beginning\n");
        printf("3. Insert before certain position except beginning\n");
        printf("4. Insert after certain position\n");
        printf("5. Insert at middle\n");
        printf("6. Delete any node in the linked list\n");
        printf("7. Search element in linked list\n");
        printf("8. Display linked list\n");
        printf("9. Delete duplicate entry\n");
        printf("Enter your choice: ");
        scanf("%d", &ans);
        switch (ans)
        {
        case 1:
        {
            do
            {
                printf("Enter data to be inserted in the linked list: ");
                scanf("%d", &data);
                getchar();
                insertend(data);
                printf("Do you want to insert more data: ");
                choice = getchar();
            } while (choice == 'y');
            getchar();
            break;
        }
        case 2:
        {
            insert_beginning();
            getchar();
            break;
        }
        case 3:
        {
            insertbefore();
            getchar();
            break;
        }
        case 4:
        {
            insertafter();
            getchar();
            break;
        }
        case 5:
        {
            insert_middle();
            getchar();
            break;
        }
        case 6:
        {
            deletenode();
            getchar();
            break;
        }
        case 7: 
        {
            search_element();
            getchar();
            break;
        }
        case 8: 
        {
            displayData();
            getchar();
            break;
        }
        case 9:
        {
            delete_duplicate();
            break;
        }
        default:
        {
            printf("Wrong Input!!!");
            getchar();
        }
        }
        printf("\nDo you want to run again(y/n): ");
        scanf("%c", &choice);
    }
    return 0;
}