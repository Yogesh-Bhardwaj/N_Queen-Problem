# N_Queen-Problem
A program to display Backtracking approach for solving N_Queen Problem.</br>
Given the no. of Queens the program displays step by step , using Backtracking how to get an arrangement of the queens so that no two queens kill each other.</br>
Just clone the repository or copy the code , compile it and run it.</br>

Example :- </br>
```
Enter number of Queens : 4
Do you want to show each step [1 = yes,0 = no] : 1
Placing Q1 at (1,1)

     Q1 -  -  -
     -  -  -  -
     -  -  -  -
     -  -  -  -

Checking if Q2 can be placed in the next column
Placing Q2 at (3,2)

     Q1 -  -  -
     -  -  -  -
     -  Q2 -  -
     -  -  -  -

Checking if Q3 can be placed in the next column
Q3 can not be placed , Removing Q2 and checking for next possible position(Backtracking)

     Q1 -  -  -
     -  -  -  -
     -  -  -  -
     -  -  -  -

Placing Q2 at (4,2)

     Q1 -  -  -
     -  -  -  -
     -  -  -  -
     -  Q2 -  -

Checking if Q3 can be placed in the next column
Placing Q3 at (2,3)

     Q1 -  -  -
     -  -  Q3 -
     -  -  -  -
     -  Q2 -  -

Checking if Q4 can be placed in the next column
Q4 can not be placed , Removing Q3 and checking for next possible position(Backtracking)

     Q1 -  -  -
     -  -  -  -
     -  -  -  -
     -  Q2 -  -

Q3 can not be placed , Removing Q2 and checking for next possible position(Backtracking)

     Q1 -  -  -
     -  -  -  -
     -  -  -  -
     -  -  -  -

Q2 can not be placed , Removing Q1 and checking for next possible position(Backtracking)

     -  -  -  -
     -  -  -  -
     -  -  -  -
     -  -  -  -

Placing Q1 at (2,1)

     -  -  -  -
     Q1 -  -  -
     -  -  -  -
     -  -  -  -

Checking if Q2 can be placed in the next column
Placing Q2 at (4,2)

     -  -  -  -
     Q1 -  -  -
     -  -  -  -
     -  Q2 -  -

Checking if Q3 can be placed in the next column
Placing Q3 at (1,3)

     -  -  Q3 -
     Q1 -  -  -
     -  -  -  -
     -  Q2 -  -

Checking if Q4 can be placed in the next column
Placing Q4 at (3,4)

     -  -  Q3 -
     Q1 -  -  -
     -  -  -  Q4
     -  Q2 -  -

Arrangement for 4 Queens :-

     -  -  Q3 -
     Q1 -  -  -
     -  -  -  Q4
     -  Q2 -  -


```
