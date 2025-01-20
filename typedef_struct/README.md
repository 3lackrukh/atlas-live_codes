# Typedef and Struct Concepts in C for Atlas T1 Students

## Introduction
This repository demonstrates the use of typedef and struct keywords in C programming. 

These keywords are essential for creating more readable and maintainable code by 
- allowing developers to define custom data types
- and aliases for existing ones. 

This guide provides examples and explanations to help you understand how to effectively use these features in your C programs.

## Table of Contents
- Introduction
- Typedef
- Struct
- Combining Typedef and Struct
- Defining Structs
- Struct Pointers
- Memory Allocation and Dereferencing
- Conclusion

## Typedef
The `typedef` keyword allows you to create an alias for a data type, making your code more readable and reducing redundancy. 

For example, you can create an alias for `unsigned char` as `byte`, which can then be used throughout your code instead of typing out [unsigned char].

`typedef unsigned char byte;`

## Struct
The `struct` keyword is used to define a composite data type that can group together variables of different types. This is particularly useful for organizing related data into a single package.

```c 
    struct bento {
        char *protein;
        char *side;
        int calories;
    };
```

## Combining Typedef and Struct
By combining `typedef` with `struct`, you can simplify the declaration of structures and their usage in your code. This approach reduces unnecessary key-strokes associated with defining and using custom data types.

``` c
    typedef struct {
        char *protein;
        char *side;
        int calories;
    } Bento;
```

## Defining Structs
Structures can be defined 
- globally 
- within header files
- in separate header files dedicated to struct definitions. 

Remember to include the necessary header files in your program if you define structs in external files.

Example of a struct definition in a header file (`bento.h`):

``` c
#ifndef BENTO_H
#define BENTO_H

#include <stdio.h>

typedef struct bento_s {
    char *protein;
    char *side;
    int calories;
} bento_t;

#endif /* BENTO_H */
```
## Struct Pointers
Struct pointers allow you to manipulate the data within a struct dynamically. You can assign addresses of structs to pointers and access the struct's members through these pointers.

``` c
Bento my_lunch;
Bento *ptr_to_lunch = &my_lunch;
ptr_to_lunch->protein = "salmon";
```

## Memory Allocation and Dereferencing
When working with structs, especially with pointers, understanding memory allocation and dereferencing is crucial. Allocating memory for a struct can be done using dynamic memory allocation functions like `malloc()` or `calloc()`. Dereferencing a pointer accesses the value stored at the memory location pointed to by the pointer.

``` c
Bento *ptr = malloc(sizeof(Bento));
if (ptr!= NULL) 
{
    ptr->protein = "chicken";
    free(ptr);
}
```

## Conclusion
Mastering the use of `typedef` and `struct` in C programming enhances code readability and organization. By understanding how to define, use, and manipulate these constructs, you can write more efficient and maintainable C programs. Explore the examples provided in this repository to gain hands-on experience with these powerful language features.
