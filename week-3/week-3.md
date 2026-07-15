# Week 3
## Recursion
### To function that is to call itself again under a condition, as a loop to repeat itself.
## Memory
### Computers can only look at one value at a time, while others remain unknown, locations that stores memory counts from 0. We use asymptotic notation, such as the big O notation to represent the rate of increase of amount of steps and time an algorithm takes, as the size of input grows, which also scales with the memory usage and to the overall efficiency. O stands for order of, and inside O() would be the mathematical representation of the scale of growth. Such as O(1) means that it always take 1, the same amount of time and steps regardless the input size. And O(n), means a proportional relationship between data size and time needed. They always assume the worst case, or the maximum steps needed for big O, the opposite of that would be omega, which measure the minimum steps, the best case. When omega and big O happens to be the same we can use captical theta Θ to represent it.
### Sometimes it could be wiser to trade off a level of efficiency or to make a more expensive but informed decision knowingly for a specific case. Such as to avoid consuming long time to fine tune and to recorrect the new version of a program that supposed to be only ran once ever just to save a few seconds time. Though it would be not the case if the program is going to be repeatedly used. 
## Seacrhing Algorithms
### Linear search
#### Known as O(n) and Ω (1), search first location, if not target value then move on to next one until found the target value or reach the end of array. This is used for unsorted value and have very low effciency, as the worst case is that you need n amount of step for n amount of input. The best case is when you found the result by the first step regardless the input size.
### Binary search
#### Known as O(logn) and Ω(1), search the middle value, if target is greater than it then to repeat the process but only for the locations after it. Vice Versa. Much more effcient than linear seacrh, as doubling the amount of input only increase the steps needed by 1 instead of also doubling it. However it only works on data that have be sorted by order, as so all the values after the middle ones are greater than it. It also has Ω (1) as the first step of the splitting process found the target value.
## Sorting tools
### In c, you can't directly compare two strings as you would do to two integars, because strings are arrays of characters so it is more complex than to simply compare if the value of two locations same. Therefore we use the library strcmp((string1), (string2)), from headerfile string.h, if equal then to return 0, otherwise positive or negative number based on whether the ASCII code of the first mismatch character of first string is greater or less than the second string's.
### To pair up items for different arrays based on their index, we can define a new type of data structure by the following,
### typedef struct
### {
### (data type) (array1);
### (data type) (array2);
### }
### (data struct name);
### Then you can declare the array using that new data struct like this, (data struct) (array name)[(size)];, because data struct is a new data type that can be repeatedly used to store different information, so we don't refer to the data struct name when modifying the content of the array, but instead the arrays declared inside the data strcut and the outside array that is using it. By the dot notation of (array)[index].(array1).
### Selection sort
#### Known as Θ(n^2), grow very fast with input and considered a slow algorithm. Works by comparing each value to every values after it, remember the smallest value and after travelled to the end of array put the remembered value to its position, this results in 1 smaller array size needed to be sort after each loop as values from left doesn't need any resort. But because it can't stop early as soon as array finished sort but runs the full process so maximum and minimum running is the same. 
### Bubble sort
#### Known as O(n) and Ω(n^2), more efficient than selection sort, works by comparing each values to next and if greater than to swap place with it, this result in the opposite sorting direction compared to selection sort, as each values being pushed to right would be largest and no need of resorting. Because we have room for implementing the action of early quit as soon as checked everything once and no swap happens so it could have a lower running time.

