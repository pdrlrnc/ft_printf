# ft_printf

A custom implementation of the C `printf` function as part of the 42 school curriculum.

## 📌 Objective

Recreate the functionality of the standard `printf` function in C, including formatted output and a subset of format specifiers, all while respecting project restrictions (no `malloc`, limited standard library functions, manual handling of variadic arguments).

## ✅ Supported Features

- Format specifiers:
  - `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`
- Flags:
  - `-`, `0`, `#`, `+`, space
- Width and precision handling
- Bonus part included (flags + extra specifiers)

## 🛠 Usage

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d\n", "world", 42);
    return (0);
}

