# Week 3
## Memory
### Computers can only look at one value at a time, while others remain unknown, locations that stores memory counts from 0. We use big O notation to represent the rate of increase of amount of steps and time an algorithm takes, as the size of input grows, which also scales with the memory usage and to the overall efficiency. O stands for order of, and inside O() would be the mathematical representation of the scale of growth. Such as O(1) means that it always take 1, the same amount of time and steps regardless the input size. And O(n), means a proportional relationship between data size and time needed. They always assume the worst case, or the maximum steps needed.
### Sometimes it could be wiser to trade off a level of effciency or to make a more expensive but informed decision knowingly for a specific case. Such as to avoid consuming long time to fine tune and to recorrect the new version of a program that supposed to be only ran once ever to save a few seconds time. Though it would be not the case if the program is going to be repeatablly used.  
## Sorting Algorithms
### Linear search
#### Known as O(n), search first location, if not target value then move on to next one until found the target value or reach the end of array. This is used for unsorted value and have very low effciency, as the worst case is that you need n amount of step for n amount of input.
### Binary search
#### Known as O(logn), search the middle value, if target is greater than it then to repeat the process but only for the locations after it. Vice Versa. Much more effcient than linear seacrh, as doubling the amount of input only increase the steps needed by 1 instead of also doubling it. However it only works on data that have be sorted by order, as so all the values after the middle ones are greater than it.


