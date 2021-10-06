#include<stdio.h>
#include<conio.h>

void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

}

int indinsert(int arr[],int size,int index)
{
    if(index >= size)
    {
        return -1;
    }
    for(int i= index;i < size - 1;i++)
    {
        arr[i] = arr[i+1];
    }
    
    return 1;
}

int main()
{
    int arr[100] = {1,3,5,98,91};
    int size = 5,index = 2;
    display(arr,size);
    indinsert(arr,size,index);
    size-=1;
    display(arr,size);
    return 0;
}