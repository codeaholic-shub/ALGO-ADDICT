#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void display(int arr[], int size){
    printf("Array: ");
    for(int i=0; i<size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void insertionsort(int arr[], int start, int end){
    for(int i=start+1; i<end; i++){
        int key = arr[i], j = i-1;
        while(j>=start && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements in the array: ");
    for(int i=0; i<size; i++)
        scanf("%d", &arr[i]);
    display(arr, size);
    insertionsort(arr, 0, size);
    display(arr, size);
}