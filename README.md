# Binary-Search In C++ 
Using Binary search for an element only for the sorted Array.

Considered you have sorted array and want fo search specific element.

Sudo code:
1. Make Lower and uper limit to the index value of array to 0 to size of an array respectively.
2. Find the median index of the array.
3. Comare the median index value is equal to key value if yes you find the element at median index value.
4. Else compare the key value is greater or smaller.
5. If is greater make lower bound to median + 1.
6. If its lower than key value make make uper bound to median - 1.
7. If still not Found element is not present in array. return "Not exist".



Complexity of this search is:

Every time you are reducing your N by dividing by 2:
That is N/2 N/4 N/8 .... N/2**n.
By solving this taking log to the both side we get O(log n).



Input:
1. Enter the numer of array.
2. Enter the elements of array.
3. enter the element to which index have to find (Key).
