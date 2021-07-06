// Linear Search Algorithm
#include <stdio.h>
 
void main()
{  
    // make two variable for input first "size_of_array" for the size of the array and 
    // second "number_for_searching" for that number we have to find.
    // result is used for storing index. 


    //input formate
    // size_of_array, number_for_searching
    // Elements of the array
    // example ==>
    // 10 25
    // 12 34 72 45 82 25 91 100 65 123
    
    int size_of_array, number_for_searching, result = -1;
 
    scanf("%d %d", &size_of_array, &number_for_searching);
    int arr[size_of_array];
    for (int i = 0; i < size_of_array; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    //  Linear search begins 
    for (int i = 0; i < size_of_array ; i++)
    {
        if (number_for_searching == arr[i] )
        {
            result = i;
            break;
        }
    }
    if (result != -1)
        printf("Element is present in the array at index %d", result);
    else
        printf("Element is not present in the array\n");
}