---
![70d6f4e10e2badb5ef394f00c17ad2bc1c14f6e7](https://user-images.githubusercontent.com/49293816/219866055-c644c6b0-c9b5-46d1-80f3-b2f78e6f7303.jpeg)

---

# Push Swap

The Push swap project is a very simple and highly straightforward algorithm project: <br />
> data must be sorted.

You have at your disposal a set of integer values, 2 stacks, and a set of instructions to manipulate both stacks.
Your goal? Write a program in C called `push_swap` which calculates and displays
on the standard output the smallest program, made of `Push swap language instructions`, that sorts the integers received as arguments.

**``` Note: I haven't shared the PDF of this project, as well as, I haven't explained anything due to school privacy reasons!```**

This project consists of two parts:
- **Mandatory part**
- **Bonus Part**

> Note: The **Bonus Part** is not that necessary to validate the project, but it gives some extra XPs and days for the **` The Blackhole`**.

---

# Makefile

Here are the rules that I have used in this project's makefile:

- all -> to make the mandatory part
- bonus -> to make the mandatory as well as the bonus part
- clean -> to clean the project from all executable and object file
- fclean -> It does the same thing as `clean` but it removes the compiled libraries as well
- re -> it deletes and re-compiles all the things from scratch

---

# The Algorithm

Since we have a limited number of instructions as well as a stack to deal with, we have to make that we have to implement an algorithm that efficiently sorts the stack in a small number of instructions. <br />
That's why I have many and many algorithms to have the projects done but they don't make me feel satisfied as some of them are too fucking complicated and others will not give the full score (bonus included) like the sorting algorithm `Radix Sorting Algorithm`. <br />
that's what led me to find another algorithm that gives the full score as well as it is much easier rather the other ones, and here is how it works. <br />

First of all, let's see the instructions we have to sort the stack :
- **sa (swap a)**: Swap the first 2 elements at the top of `stack a`.
Do nothing if there is only one or no element.
- **sb (swap b)**: Swap the first 2 elements at the top of `stack b`.
Do nothing if there is only one or no element.
- **ss** : sa and sb at the same time.
- **pa (push a)**: Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
- **pb (push b)**: Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
- **ra (rotate a)**: Shift up all elements of `stack a` by 1.
The first element becomes the last one.
- **rb (rotate b)**: Shift up all elements of `stack b` by 1.
The first element becomes the last one.
- **rr** : ra and rb at the same time.
- **rra** (reverse rotate a): Shift down all elements of `stack a` by 1.
The last element becomes the first one.
- **rrb** (reverse rotate b): Shift down all elements of `stack b` by 1.
The last element becomes the first one.
- **rrr **: rra and rrb at the same time.

first of all, after parsing the arguments into the `stack a` and checking if there is a weird character rather than a number, we should create another stack that has the elements from the origin stack, but this time the temporary stack should have the elements sorted (I have used the bubble sort to sort them).

secondly, hold the top of `stack a` and get its index from the sorted stack once you have it, let's check if does belong to the range or not.

> 100 -> The range will be something similar to (0.15)

> 500 -> The range will be something similar to (0.30)

- If the index of the top of `stack a` from the sorted stack is less than or equal to the start of the range, we **pb** the element to `stack b`, rotate the `stack b` and increase the start and the end of the range by one.
- If the index of the top of `stack a` from the sorted stack is greater than the start of the range and smaller than the end of the range, we **pb** the element to `stack b` and increase the start as well as the end of the range by one.
- If the index of the top of `stack a` from the sorted stack is greater than or equal to the end of the range, we **ra** the top of `stack a`.

once `stack a` is empty we have to get back elements from `stack b`, but this time it would be much easier as we have in `stack b` the elements cheaped in the form of a mirror pyramid, so all you have to do, is to get the index of the maximum number in `stack b` and check if the index if in the second half of the `stack b` then keep rra the element until it reaches the top then push it back to `stack a` (pa) otherwise (**ra**)

By the end of this algorithm, you will see this stack sorted in an appropriate number of instructions.

---

# Things you will learn in this project

- Data Structures (Stacks)
- Makefile
- Structs
- Sorting algorithms
- Memory leaks
- Problem-solving

---

# Contact Me

* [Twitter][_1]

[_1]: https://twitter.com/amait0u

---
