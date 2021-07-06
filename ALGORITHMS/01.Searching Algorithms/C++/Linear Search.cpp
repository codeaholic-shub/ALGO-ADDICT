// Linear Search Algorithm
#include <iostream>
using namespace std;
 
int Linear_search(int arr[], int size_of_array, int number_for_searching )
{
    int i;
    for (i = 0; i < size_of_array; i++)
        if (arr[i] == number_for_searching)
            return i;
    return -1;
}
 
// Driver code
int main(void)
{
    // make two variable for input first "size_of_array" for the size of the array and 
    // second "number_for_searching" for that number we have to find.


    //input formate
    // size_of_array, number_for_searching
    // Elements of the array
    // example ==>
    // 10 25
    // 12 34 72 45 82 25 91 100 65 123

    int size_of_array, number_for_searching;
    cin>>size_of_array >> number_for_searching;;
    int arr[size_of_array+1]; // create a array size +1 than the size of the array givin.
    for(int i = 0; i<size_of_array; i++){
    	cin>>arr[i];
    }
   
    // Function call
    int result = Linear_search(arr, size_of_array, number_for_searching);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}