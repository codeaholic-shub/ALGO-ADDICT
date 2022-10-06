#include<iostream>
using namespace std;


void heapify(int arr[], int size, int i)        // This function is basically used to create heap out of given array.
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if(l<size && arr[l] > arr[largest])
    largest = l;

    if(r<size && arr[r] > arr[largest])
    largest = r;

    if(largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, size, largest);
    }
}
void heapSort(int arr[], int size)      // Main function which is called first
{
    for(int i = size/2 - 1; i>=0; i--)
    heapify(arr, size, i);

    for(int i = size - 1; i >= 0; i--)      // Replace the largest element(or first element of max-heap) with the last element(or minimum element) of array
    {
        swap(arr[i], arr[0]);
        heapify(arr, i, 0);
    }
}
void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int a[] = {7, 2, 9, 0 , 5, 1, 6};
    int size = sizeof(a)/sizeof(a[0]);
    heapSort(a, size);      // heapSort Function is called
    printArray(a, size);    // printArray function is called which is responsible for printing the final array.
return 0;
}