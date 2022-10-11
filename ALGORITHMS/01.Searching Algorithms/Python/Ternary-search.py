
#  Ternary search
  
# Function to perform Ternary Search
def ternarySearch(l, r, key, array):
    while r >= l:
          
        # Find mid1 and mid2
        mid1 = l + (r-l) // 3
        mid2 = r - (r-l) // 3
  
        # Check if key is at any mid
        if key == array[mid1]:
            return mid1
        if key == mid2:
            return mid2
  
        # Since the key is absent in the mid, 
        #  check the area where it is
        #  Next, conduct another search in that area.
       
        if key > array[mid2]:
            # key lies between mid2 and r
            l = mid2 + 1
        elif key < array[mid1]:
            # key lies between l and mid1
            r = mid1 - 1
        else:
            # key lies between mid1 and mid2
            l = mid1 + 1
            r = mid2 - 1
  
    # key not found
    return -1
  
# Driver code
  
# Obtain the list.
#  If the list is not sorted, sort it.
array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
  
# Starting index
l = 0
  
# Length of list
r = 9
  
# Checking for 4
# to look for in the list is the key
key = 4
  
# Search the key using ternary search
p = ternarySearch(l, r, key, array)
  
# Print the result
print("Index of", key, "is", p)
  
# Checking for 40
# to look for in the list is the key
key = 40
  
# Search the key using ternary search
p = ternarySearch(l, r, key, array)
  
# Print the result
print("Index of", key, "is", p)

#output
# Index of 4 is 3
# Index of 40 is -1