# PUSH_SWAP - a sorting algorithm
### What is the problem?
We have 2 `stacks` a and b. In the beginning, the stack a contains a random amount of numbers (both -ve and +ve), and there are no repeating numbers, while stack b is empty.

The goal is to sort stack a in ascending order, we have these moves available:

`sa` (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.

`sb` (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.

`ss` : sa and sb at the same time.

`pa` (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.

`pb` (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.

`ra` (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.

`rb` (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.

`rr`: ra and rb at the same time.

`rra` (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.

`rrb` (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.

`rrr` : rra and rrb at the same time.

The target for my sorting algorithm:
* To sort 100 numbers in less than 700 moves
* To sort 500 numbers in less than 5500 moves

### To test my program:
`git clone` my repository and `make` to compile the program, enter the numbers you want to sort as arguments to the program. Of course, with a large no. of numbers, can set it into a variable. 
