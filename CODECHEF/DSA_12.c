#include <stdio.h>

#include <stdlib.h>
#include<conio.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr,int val)
{
    if(isFull(ptr))
    {
        printf("stack overflow! and cannot push %d in stack.\n",val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("Stack underflow! and we cannot pop from stack\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *ptr,int i)
{
    int arrayindex = ptr->top - i +1;
    if(arrayindex < 0)
    {
        printf("Not a valid position for a stack\n");
        return -1;
    }
    else{
        return ptr->arr[arrayindex];
    }
}

int backtop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}
int backbottom(struct stack *ptr)
{
    return ptr->arr[0];
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size =116;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    printf("before pushing , FULL : %d\n",isFull(s));
    printf("Before pushing , Empty : %d\n",isEmpty(s));

    push(s,11);
    push(s,12);
    push(s,13);
    push(s,14);
    push(s,15);
    push(s,16);
    push(s,17); 

    printf("After pushing , FULL : %d\n",isFull(s));
    printf("After pushing , Empty : %d\n",isEmpty(s));

    //Printing values from the stack.
    for(int j=1;j<=s->top +1;j++)
    {
        printf("the value at position %d is %d\n",j,peek(s,j));
    }

    printf("The topmost element is %d\n",backtop(s));
     printf("The bottommost element is %d\n",backbottom(s));


   

    

    

    


   
    return 0;
}