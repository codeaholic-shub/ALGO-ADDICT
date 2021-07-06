// Linear Search Algorithm
#include <stdio.h>
 
int Linear_search(int arr[], int size_of_array, int number_for_searching )
{
    int i;
    for (i = 0; i < size_of_array; i++){
        if (arr[i] == number_for_searching){
            return i;
            break;
        }
    }
    return -1;
}
 
// Driver code
int main(void)
{

    int arr[] = {12, 34, 72, 45, 82, 25, 91, 100, 65, 123};
    int number_for_searching = 25;
    int size_of_array = sizeof(arr) / sizeof(arr[0]); // finding the length of the array
   
    // Function call
    int result = Linear_search(arr, size_of_array, number_for_searching);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
    return 0;
}