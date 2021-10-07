def insertion_sort(my_list):  
  
        for i in range(1, len(my_list)):  
  
            tmp = my_list[i]   
            j = i - 1  
            while j >= 0 and tmp < my_list[j]:  
                my_list[j + 1] = my_list[j]  
                j -= 1  
            my_list[j + 1] = tmp  
        return my_list  
            # Driver code to test above  
  
my_list = [10, 5, 13, 8, 2]  
print("The unsorted list is:", my_list)  
  
print("The sorted my_list is:", insertion_sort(my_list))  
