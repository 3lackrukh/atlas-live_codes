# Introduction to Linked Lists for Atlas T1 Students

## Overview

Linked lists are a fundamental data structure in computer science, offering a dynamic alternative to arrays for storing collections of items. This guide introduces Atlas T1 students to the basics of linked lists, refreshing their understanding of structs, and explaining how linked lists overcome the limitations of arrays.

## Introduction to Structs

Structs in C allow us to define custom data types, combining variables of different types under a single name. This is particularly useful for creating complex data structures like linked lists.

### Problems with Arrays

Arrays come with several limitations:

- **Fixed Size**: Once an array is created, its size cannot be changed. Expanding an array requires allocating a new, larger array and copying over the old data, which is inefficient.
- **Adding and Deleting Data**: Inserting or removing elements from an array can be costly, especially in the middle, as it may require shifting many elements.
- **Memory Efficiency**: Arrays store data in contiguous memory locations, often leading to wasted space if the array's capacity exceeds the number of elements stored.

## Declaring a Node Structure `(node_t)`

To implement a linked list, we define a struct for our list nodes:

```c
typedef struct node {
    int data; // The data stored in this node
    struct node* next; // Pointer to the next node in the list
} node_t;
```

Using `typedef`, we create an alias `node_t` for the struct, simplifying references to the struct type. Each node consists of an integer `data` and a pointer `next` to the next node in the list.

## Creating the Head of the List

We represent the head of the list with a pointer initialized to `NULL`, indicating an empty list:

```c
node_t* head = NULL;
```

## Interactive Demonstration: Inserting at the Beginning

Ask students to write a function that inserts a new node at the beginning of the list. This exercise will reinforce their understanding of pointers and dynamic memory allocation.

## Scavenger Hunt Concept

Visualize traversing a linked list as a scavenger hunt, where each node contains a clue (data) leading to the next node. This metaphor helps students grasp the sequential nature of linked lists.

## Conclusion

Singly linked lists are a powerful tool for dynamically managing collections of data. By overcoming the limitations of arrays, they offer flexibility and efficiency in scenarios requiring frequent insertions and deletions. Thank you for exploring this essential data structure.

---

This README serves as a concise introduction to linked lists, structured to facilitate learning among Atlas T1 students. It covers the basics of structs, the problems with arrays, and the benefits of linked lists, accompanied by practical examples and exercises.
