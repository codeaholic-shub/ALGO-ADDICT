#  Linear Search Algorithm
def Linear_search(arr, size_of_array, number_for_searching):
 
    for i in range(0, size_of_array):
        if (arr[i] == number_for_searching):
            return i
    return -1
 
# make two variable for input first "size_of_array" for the size of the array and 
# second "number_for_searching" for that number we have to find.


# input formate
#  size_of_array, number_for_searching
#  Elements of the array
#  example ==>
#  10 25
#  12 34 72 45 82 25 91 100 65 123
 
# Driver Code
# list(map(int, input().split())) this is just taking input ans creating a list of int input.
# Example ==>  12 34 72 45 82 25 91 100 65 123 ==> [12, 34, 72, 45, 82, 25, 91, 100, 65, 123].
size_of_array = int(input())
number_for_searching = int(input())
arr = list(map(int, input().split()))


 
# Function call
result = Linear_search(arr, size_of_array, number_for_searching)
if(result == -1):
    print("Element is not present in array")
else:
    print("Element is present at index", result)