# Data-Structures-with-C

ARRAY
An array is declared of a certain size and data type. 
Data is sought from the user, and memory locations are checked if they exist or not.

BITWISE
1. and
The bitwise operator for AND logic is performed on two integers, keyed in by the user. 
The output is displayed.

2. counter
This program seeks an integer from the user. 
Using the AND operation and right shift, each digit in the binary form of the integer is checked. 
The output returned is the number of 1s in the binary form of the integer.

3. even or odd
The AND logic is employed with if-else conditions to determine if an integer is even or odd. 
The integer is even if number&1 returns 0, and odd otherwise.

4. switch case
Switch case makes a menu that asks user which bit-wise operation they are interested in using. 
The program carries out AND, OR or XOR operation on two integers of the user's choice.
Each case of the switch case function is assigned to an operation. The result is displayed to the user.

FOR LOOP
After introducing a for loop in a program, the loop runs across it for a fixed number of times. 
It is defined by setting an initial value, end value and by what value it gets updated. (i=1;1<10;i++)
This has a lot of usage where repetition at regular intervals occurs. 

MALLOC FUNCTION
The malloc() function is a dynamic data memory allocation that can increase beyond the scope of the limit.
It can increase beyond the set size if required.

1. declaring void variable
A pointer is assigned to the memory in malloc, its data type is also fixed. 
The pointer points to a specified location, in the next line, it moves to the successive memory location.

2. store character
A program was made that accepts character-type data in the malloc data structure.

3. using
This program illustrates the usage of the malloc function. 
The pointer points to one location in the character-type memory, s, and then moves on to the successive location, value of which is stored in a.

POINTERS
Pointers are variables that hold the address to other variables. 
The & sign is used to "fetch" the address of the variable at that memory location.
The * operator accesses the value of an address.
Pointers are helpful in recursion by making a function go back to itself. 

QUEUE
A queue is a two-ended data structure, comparable to a line at a shop. It works on the first-in, first-out or last-in, last-out principle.
The front of the queue is for removing values, dequeueing, while the rear end is for entering values, called enqueueing. 
A menu was devised, by switch case, that gives the user the choice to enqueue, dequeue or display the elements of the queue. The three actions were defined as functions, with a check in enqueueing and dequeueing for an overflow and empty stack, respectively.

STACK
Stack is a single-ended data structure that can be compared to a bucket. It works on the first-in, last-out principle.
Data entry and removal occur from the same end. Stack is useful is arithmetic operations with post-fix forms. 
A menu was devised to push (enter data), pop (remove data) and display all the elements of the stack. The three actions were defined as functions. The push and pop functions checked whether the stack was full and empty respectively.

STRUCTURES
A structure, written struct, is an efficient way to group several variable under one heading.
The variables in a struct do not have to be of the same type-- multiple data types can be stores using struct.
For example, we were asked to make a database of cars.
Name, number of seats, cost and category of the car (character, integer, float and character type data respectively) were the variables under the heading of "Honda", which is a car brand.
The structure stores user-input data.








