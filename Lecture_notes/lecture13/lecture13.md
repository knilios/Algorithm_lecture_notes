# Lecture 13 - Greedy algorithm

Greedy algorithm is a family of algorithms that utilize the concept, just like divide an conquer.

![something like this](image.png)

## Backtracking Algorithm
Basically, try all the things. Here's how it works.

|step|what to do|
|----|----------|
|1|do something|
|2...n| recurse for n -1 steps|

In summary, do the first step and let other step done by recursion.

```pseudo
for each possible 1st step option
    try that option
    recursively do the other step
```

Here's the visualization: 

![Backtracking algorithm Picture](image-1.png)

### n-Queens Problem

A move of a queen in chess.

![Picture of a queen](image-2.png)

A queen visualization.

![Picture of a queen](image-3.png)

Question: can we place 4 queens on a 4x4 board so that they won't capturing each other.

Answer: Yes like this.

![Queens not eating each other](image-4.png)

Visualization: 

![Queens facing each other](image-5.png)

Question: What about for an nxn chess board?

Answer: Try back tracking! Try ALL possible options until you find the solutions!

![Back tracking](image-6.png)

```pseudo
NQueens(i) // Assuming that we have populated 1 - (i-1) rows, And now we want to populate rows i - n.
    if i = n + 1 // If we've finished populating.
        answer Q
    else
        for j <- 1 to n // for all the rows
            fail <- false
                for k <- 1 to i
                    if (k,Q[k]) conflicts with (i,j) // in conflict means they are in the same place
                        fail <- true // We have to handle conflict detection on our own
                if not fail
                    Q[i] = j
                    NQueens(i+1)

Call NQueens(1) to get the answer
```

## Greedy Algorithm
Greedy is also lazy. It's not going to go into all of the options. No back tracking. Basically, you get the best thing possible at the moment.

### Knapsack Problem
Knapsack is a bag in some sense.

Imagine trying to rob a bang. You would have a bag and then tell the bank stuffs to put as many loot as possible into your bag.\\

Suppose that your bag can held up to weight W.

#### 0-1 Knapsack
Basically, you must get the whole of it or none of it.

-|1|2|3|4|5|
|-|-|-|-|-|-|
|wi|5|4|4|2|5|
|Pi|20|10|15|12|10|

Suppose W = 10, what are you gonna do to maximize your profit. Of course! 2,3,4 is the best option.

Strategy 1: Highest price (that still fits in the bag) -> bad :(

Strategy 2: Lowest weight -> still bad :(

Stratehy 3: Highest $\frac{price}{weight}$ ratio -> It doesn't work either!! :(

Protip: There's really not gonna be a greedy algorithm that's going to work. But if you want to be sure that in sometimes, some of the strategy works. You have to prove it. (We'd like to prove it, prove it)

#### Fractional Knapsack Problem
In this one, you can actually take a portion of the options you have.

## Interval Scheduling
Here's the situation: We want to schedule a time table 


