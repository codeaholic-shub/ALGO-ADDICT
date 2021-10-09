# Python program for implementation of Selection

#  make a variable for input  "size_of_array" for the size of the array 


    # input formate
    #  size_of_array
    #  Elements of the array
    #  example ==>
    #  10 
    #  12 34 72 45 82 25 91 100 65 123


    #  Author ==> Yash Raj Saxena
    #  GitHub ID @captr1g
 
 

import sys
size_of_array = int(input("Enter the size of the array "))
arr = list(map(int, input("Enter the Numbers ").split()))

 
# Traverse through all array elements
for i in range(size_of_array):
     
    # Find the minimum element in remaining
    # unsorted array
    min_idx = i
    for j in range(i+1, size_of_array):
        if arr[min_idx] > arr[j]:
            min_idx = j
             
    # Swap the found minimum element with
    # the first element       
    arr[i], arr[min_idx] = arr[min_idx], arr[i]
 
# Driver code to test above
print ("Sorted array")
for i in range(size_of_array):
    print(arr[i], end = ' ')