// C++ program to implement recursive Binary Search
#include <bits/stdc++.h>
using namespace std;
  
// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
  
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
  
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
  
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
  
    // We reach here when element is not
    // present in array
    return -1;
}
  

  // make two variable for input first "size_of_array" for the size of the array and 
    // second "number_for_searching" for that number we have to find.
    // result is used for storing index. 


    //input formate
    // size_of_array,
    // Elements of the array
    // number_for_searching
    // example ==>
    // 10
    // 5 10 15 20 25 30 35 40 45 50
    // 25
    

    // Author ==> Yash Raj Saxena
    // GitHub ID @captr1g


int main(void)
{
    int size_of_array, number_for_searching;
    int arr[1000];
    cout<<"Enter the size of the array "<<endl;
    cin>>size_of_array;
    cout<<"Enter the Numbers"<<endl;
    for (int i = 0; i < size_of_array; i++){
        cin>>arr[i];
    }
    cout<<"Enter the Numbers that you want to search "<<endl;
    cin>>number_for_searching;
    int result = binarySearch(arr, 0, size_of_array - 1, number_for_searching);
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result;
    return 0;
}