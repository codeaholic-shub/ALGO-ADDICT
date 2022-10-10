#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void display(int arr[], int size){
    printf("Array: ");
    for(int i=1; i<=size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void iterHeapify(int arr[], int size, int node){
    while(2*node<=size || 2*node+1<=size){
        int max = node;
        if(2*node <= size && arr[2*node] > arr[max])
            max = 2*node;
        if(2*node+1 <= size && arr[2*node+1] > arr[max])
            max = 2*node+1;
        if(max != node){
            swap(&arr[node], &arr[max]);
            node = max;
        }
        else
            break;
    }
}

void heapify(int arr[], int size, int node){ // compares 3 nodes (root, left child, right child) and swaps maximum among them with the root
    int max = node;
    if(2*node <= size && arr[2*node] > arr[max])
        max = 2*node;
    if(2*node+1 <= size && arr[2*node+1] > arr[max])
        max = 2*node+1;
    if(max != node){
        swap(&arr[node], &arr[max]);
        heapify(arr, size, max);
    }
}

void buildmaxheap(int arr[], int size){
    for(int i=size/2; i>=1; i--) // build max heap function // when the loop ends, the maximum value becomes the root
        heapify(arr, size, i);
}

void heapsort(int arr[], int size){
    buildmaxheap(arr, size);
    while(size>=1){
        swap(&arr[1], &arr[size]);
        heapify(arr, --size, 1);
    }
}

void recHeapSort(int arr[], int size){
    if(size>0){
        buildmaxheap(arr, size);
        swap(&arr[1], &arr[size]);
        recHeapSort(arr, --size);
    }
}

void main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size+1];
    printf("Enter the elements in the array: ");
    for(int i=1; i<size+1; i++)
        scanf("%d", &arr[i]);
    display(arr, size);
    recHeapSort(arr, size);
    display(arr, size);
}