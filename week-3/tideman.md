# Tideman Case study
## Introduction
### Tideman was the first programming problem where I felt like understanding the algorithm was significantly harder than implementing the idea to code. Unlike previous assignments, I could not simply just start thinking how the loop or syntax should look lik. I first had to build a mental model of how the election worked before start writing it up and fixing it along the way.
### Although this problem took me multiple focused sessions and serveral hours of reasoning, it has became one of the most valuable learning experiences so far becasuse it funcdamentally changed how I should approach algorithmic problems.

## Before writing
### At first the problem looked overwhelming, there were multiple global arrays, structs, helper functions and matrices interacting together that are pre-written.
### I tried to follow the same way I approach to a programming problem, to understand the system and everything throughout simultaneously, which made the entire problem seems impossible.
### What I learned is that decomposition should not only applied after but should also before the problem was understood. As now I am no longer trying to understand the entire program at once but to one function at a time.

## vote()
### I noticed that it is a function meant to return a boolean value, and if false it should return failed to find candidate so I quickly added a searching loop in.
### I need to understand why the function takes rank, name and ranks[] but not the candidates array.
### I realised that candidates[] is a global variable that each candidates having their own index value representing themselves, so this implies that this array will be used in different places acting like IDs.
### By this I know I shouldn't modify candidates[] as vote() will be called multiple times and if each changes it then ID won't be trackable, so I looked at j as one of its parameter, I understood that as everytime the j be different when vote() being called, it is to rank candidates in different places, as suggested by another parameter ranks[].
### Knowing ranks[] as array and changes each voter but not each time vote() being called I learned that the function is to store the ranking of each candidates by their IDs for each voter.
### I learnt and experienced how many algorithms become easier when actively converting complex data (strings) into simple numerical representations and to use them instead.

## record_preferences()
### At first I struggled to understand what the matrix actually trying to represented.
### By looking up how it has been used, it has been used for each voter to update a matrix that won't be reseted and so it should sum up data and be used later on, so I realised that preferences is to store how many voters prefer one over another candidates. 
### I strengthen my skill of understanding the algorithm by the data structure itself, rather than fully by human language that are less abstractive.

## add_pairs()
### This function is to extract the relationship of winner and loser, of how one have more preference against another.
### Initially I used the loop variable as the index inside pairs[]. However, I soon realised that i always increase no matter what, but the instruction said to only add a new pair to a new index when it is not a tie, and even I designed to not add a new pair the program still moves on to next index of pairs, which leaves blank positions.
### I soon realised that pair_count exists independently from the loop declared by cs50 beforehand because they know ties should not consume an index.
### I learnt that loop iterations should not always be used when managing what to add in array, as every index in array should represent data passed through the requirements.

## sort_pairs
### I believed I needed another array storing victory strengths before sorting, which makes the entire coding process becomes much more complex as I need to first calculate and fill in strengths, then link two arrays together, by their indexes of one as its strength one as its corrosponding pair. 
### But then after zooming out I realised that strength can always be calculated using preferences, as flipping two IDs gives the strength.
### I learnt that sometimes zooming out can help you recall some useful details from other parts of the program that can be used to avoid duplication of same purpose of to give same information.

## lock_pairs()
### This is by far the hardest part of the problem. It completely changed my understanding of programming an algorithm.
### At first I mistakenly checked for cycles inside the sorted pairs rather than the locked graph. And this prevented any meaningful progress.
### After reusing the technique I learnt to zoom out again, to think about the overall design, I realised that the purpose of lock_pairs() is to decide what victories to be added to locked[][], so there is no point to check whether cycle happens in sorted pairs, but whether cycle happens in locked[][], as we are uilising the fact that any cycle needs one outgoing pair and one incoming pair, so using the fact that locked[][] is incompleted, to add the first part of the cycle pair in and to avoid adding the second to prevent a real full cycle from happening, as the order of stronger half cycle adding is by sorted pairs and that is why I made that mistake of referring to it everywhere.


