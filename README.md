# ft_vector Library

The `ft_vector` library is a custom dynamic array implementation for C, inspired by C++ `std::vector`. This library provides flexible and efficient methods to manage dynamically sized arrays with ease.

## Table of Contents

1. [Installation](#installation)
2. [Usage](#usage)
3. [API Reference](#api-reference)
4. [Examples](#examples)
5. [License](#license)

## Installation

1. Clone the repository or copy `ft_vector.c` and `ft_vector.h` into your project:
    ```bash
    git clone <repository-url>
    ```

2. Include `ft_vector.h` in your C file:
    ```c
    #include "ft_vector.h"
    ```

3. Compile your project with `ft_vector.c`:
    ```bash
    gcc -o my_program my_program.c ft_vector.c
    ```

## Usage

### Initialize a Vector
Create and initialize a vector using:
```c
t_vector *vector = ft_vector_create();
```

### Adding Elements
To add elements at the end:
```c
int *value = malloc(sizeof(int));
*value = 42;
ft_vector_push_back(vector, value);
```

To add elements at the beginning:
```c
int *value = malloc(sizeof(int));
*value = 1;
ft_vector_push_front(vector, value);
```

### Accessing Elements
Access an element by index:
```c
int *retrieved_value = ft_vector_at(vector, 0);
```

Get the last or first element:
```c
void *last_element = ft_vector_back(vector);
void *first_element = ft_vector_front(vector);
```

### Removing Elements
Remove the last or first element:
```c
ft_vector_pop_back(vector);
ft_vector_pop_front(vector);
```

Erase an element by position:
```c
ft_vector_erase(vector, 2);
```

### Resizing the Vector
Resize the vector manually:
```c
ft_vector_resize(vector, new_capacity);
```

### Free the Vector
Free the vector and its elements:
```c
ft_vector_free(vector);
```

## API Reference

### Initialization
- `t_vector *ft_vector_create(void);` — Initializes a new vector.
- `void ft_vector_init(t_vector *vector);` — Resets an existing vector.

### Element Access
- `void *ft_vector_at(const t_vector *vector, unsigned long index);` — Returns the element at `index`.
- `void *ft_vector_back(const t_vector *vector);` — Returns the last element.
- `void *ft_vector_front(const t_vector *vector);` — Returns the first element.

### Adding Elements
- `void ft_vector_push_back(t_vector *vector, void *value);` — Adds an element to the end.
- `void ft_vector_push_front(t_vector *vector, void *value);` — Adds an element to the front.
- `unsigned long ft_vector_insert(t_vector *vector, unsigned long position, void *value);` — Inserts an element at a specific position.

### Removing Elements
- `void ft_vector_pop_back(t_vector *vector);` — Removes the last element.
- `void ft_vector_pop_front(t_vector *vector);` — Removes the first element.
- `void ft_vector_erase(t_vector *vector, unsigned long position);` — Erases an element at a specific position.

### Resizing
- `bool ft_vector_resize(t_vector *vector, unsigned long new_capacity);` — Resizes the vector to `new_capacity`.
- `bool ft_vector_shrink_to_fit(t_vector *vector);` — Shrinks the vector capacity to match its size.
- `void ft_vector_reserve(t_vector *vector, unsigned long new_capacity);` — Ensures a minimum capacity.

### Utility Functions
- `unsigned long ft_vector_size(const t_vector *vector);` — Returns the size of the vector.
- `bool ft_vector_empty(const t_vector *vector);` — Checks if the vector is empty.
- `void ft_vector_set(t_vector *vector, int pos, void *value);` — Sets the value at a specific position.
- `t_vector *ft_vector_clone(const t_vector *vector);` — Clones the vector into a new one.
- `t_vector *ft_vector_subvector(t_vector *vector, int start, int length);` — Creates a subvector.

## Examples

```c
#include "ft_vector.h"
#include <stdio.h>

int main() {
    t_vector *vector = ft_vector_create();

    int *value = malloc(sizeof(int));
    *value = 42;
    ft_vector_push_back(vector, value);

    int *retrieved_value = ft_vector_at(vector, 0);
    printf("Value at index 0: %d\n", *retrieved_value);

    ft_vector_free(vector);
    return 0;
}
```

