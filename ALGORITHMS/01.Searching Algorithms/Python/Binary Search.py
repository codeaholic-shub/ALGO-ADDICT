# Python3 Program for recursive binary search.
  
# Returns index of x in arr if present, else -1
def binarySearch (arr, l, r, x):
  
    # Check base case
    if r >= l:
  
        mid = l + (r - l) // 2
  
        # If element is present at the middle itself
        if arr[mid] == x:
            return mid
          
        # If element is smaller than mid, then it 
        # can only be present in left subarray
        elif arr[mid] > x:
            return binarySearch(arr, l, mid-1, x)
  
        # Else the element can only be present 
        # in right subarray
        else:
            return binarySearch(arr, mid + 1, r, x)
  
    else:
        # Element is not present in the array
        return -1
  

    #  make two variable for input first "size_of_array" for the size of the array and 
    #  second "number_for_searching" for that number we have to find.
    #   result is used for storing index. 


    # input formate
    # size_of_array,
    # Elements of the array
    # number_for_searching
    # example ==>
    # 10
    # 5 10 15 20 25 30 35 40 45 50
    # 25
    

    # Author ==> Yash Raj Saxena
    # GitHub ID @captr1g


# Driver Code
size_of_array = int(input("Enter the size of the array "))
arr = list(map(int, input("Enter the Numbers ").split()))
number_for_searching = int(input("Enter the Numbers that you want to search "))
# Function call
result = binarySearch(arr, 0, size_of_array-1, number_for_searching)
  
if result != -1:
    print ("Element is present at index % d" % result)
else:
    print ("Element is not present in array")