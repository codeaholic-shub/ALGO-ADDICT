// C++ program for implementation of selection sort
#include <bits/stdc++.h>
using namespace std;
 
void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(int arr[], int n){
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++){
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
 
        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}


    // make a variable for input  "size_of_array" for the size of the array 


    //input formate
    // size_of_array
    // Elements of the array
    // example ==>
    // 10 
    // 12 34 72 45 82 25 91 100 65 123


    // Author ==> Yash Raj Saxena
    // GitHub ID @captr1g
 
/* Function to print an array */
void printArray(int arr[], int size){
    int i;
    for (i=0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
 
// Driver program to test above functions
int main(){
    int size_of_array;
    int arr[1000];
    cout<<"Enter the size of the array "<<endl;
    cin>>size_of_array;
    cout<<"Enter the Numbers"<<endl;
    for (int i = 0; i < size_of_array; i++){
        cin>>arr[i];
    }
    selectionSort(arr, size_of_array);
    cout << "Sorted array: \n";
    printArray(arr, size_of_array);
    return 0;
}
