# Binary-Search In C++ 

Binary search is one of the popular algorithm for seaching the element.
Requirement : Given array should be sorted.

# Pseudo code:

1. Make Lower and upper limit variable to the index value of array from 0 to size of an array respectively.
2. Find the median index of the array.
3. Compare the median index value is equal to key value if yes, you found an element at median index value.
4. Else compare the key value is greater or smaller.
5. If is greater than key value, than make lower bound to median + 1.
6. If its lower than key value, than make upper bound to median - 1.
7. If still not Found element is not present in array then return "Not exist".



# Complexity of this Binary Search is:

Every time you are reducing your N by dividing by 2:
That is N/2 N/4 N/8 .... N/2**n.

By solving this taking log to the both side we get O(log n).

Worst case         O(log n)

Average case       O(1)



# Input:
1. Enter the size of an array.
2. Enter the elements of array.
3. enter the element to which index have to find (Key value).


# Output:
Index number of the key value.
