# Variadic Functions Introduction for T1 Students

## Overview

Variadic functions are a powerful feature in C programming that allow a function to accept an indefinite number of arguments. This guide introduces these functions, focusing on their implementation and usage through a practical example. The example provided demonstrates how to handle variadic functions using the `stdarg.h` library, which provides a set of macros to work with variable argument lists.

### Prerequisites

To understand and follow along with this guide, you should have a basic understanding of C programming concepts such as functions, variables, and control structures.

### Repository Contents

The repository contains a simple program demonstrating the use of variadic functions. It includes:

- **main.c**: The main program file that calls a variadic function (`print_gifts`) with various sets of arguments.
- **print_gifts.c**: Contains the implementation of the `print_gifts` function, which prints out a list of "gifts" passed to it.
- **main.h**: Header file containing declarations needed for both source files.
- **README.md**: This document.

Additionally, the repository contains a pre-compiled executable named `x-mas`. This executable was compiled with the command `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`.

### Variadic Functions Explained

Variadic functions allow a function to accept a variable number of arguments. They are defined using an ellipsis (`...`) after the last named parameter in the function declaration. To access these arguments within the function, the `stdarg.h` library provides a set of macros.

#### New Data Type: `va_list`

- **Description**: A variable of type `va_list` must be declared to store the arguments passed into your function. Think of it as Santa's bag, loaded with goodies (arguments).
- **Usage**: Declared to iterate over the variable arguments passed to a function.

#### Macro Functions in `stdarg.h`

- **va_start**: Begins iterating over arguments with a `va_list`.
  - Called with two arguments: the `va_list` variable storing arguments and the name of the last named parameter of the function.
- **va_arg**: Retrieves an argument in order.
  - First argument is the `va_list`, followed by the data type of the argument (e.g., `char *`, `int`).
- **va_end**: Frees a `va_list`. Must be called before returning from the function.
- **va_copy**: Copies contents from one `va_list` to another.

### Example: `print_gifts` Function

The `print_gifts` function demonstrates how to use variadic functions and the `stdarg.h` library. It takes a variable number of `const char *` arguments, representing gifts, and prints them until a `NULL` argument is encountered.

```c
#include "main.h"

void print_gifts(const char *gift1,...)
{
    va_list santa_bag;
    const char *current_gift;

    va_start(santa_bag, gift1);

    if (gift1!= NULL)
    {
        printf("Gifts under the tree:\n%s", gift1);
        while ((current_gift = va_arg(santa_bag, const char *))!= NULL)
        {
            printf(", %s", current_gift);
        }
        va_end(santa_bag);
        printf("\n\n");
    }
}
```

### Conclusion

Variadic functions provide flexibility in function design, allowing for functions that can handle a varying number of arguments. Through the use of the `stdarg.h` library and its macros, developers can effectively manage and process these variable arguments. The example provided offers a practical demonstration of variadic functions in action, showcasing their utility and ease of use in C programming.