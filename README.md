# ft_printf

A custom implementation of the **printf** function in C, developed as part of the **42 Network** curriculum.
The goal is to recreate a simplified but fully functional version of the standard `printf`, focusing on variadic functions, formatting, and low-level output handling.

---

## 📌 Table of Contents

* [About the Project](#about-the-project)
* [Supported Conversions](#supported-conversions)
* [Project Structure](#project-structure)
* [Compilation](#compilation)
* [Usage](#usage)
* [Author](#author)

---

## 📖 About the Project

`ft_printf` is designed to mimic the behavior of the standard C `printf` function.
It handles string parsing, type formatting, and output through a custom, efficient implementation.

The project reinforces:

* Variadic functions (`va_list`, `va_start`, `va_arg`, `va_end`)
* Memory and string manipulation
* Manual formatting logic
* Code modularity and clean design

---

## 🔤 Supported Conversions

Your custom `ft_printf` supports the following format specifiers:

| Specifier | Description             |
| --------- | ----------------------- |
| **%c**    | Character               |
| **%s**    | String                  |
| **%p**    | Pointer address         |
| **%d**    | Signed integer          |
| **%i**    | Signed integer          |
| **%u**    | Unsigned integer        |
| **%x**    | Hexadecimal (lowercase) |
| **%X**    | Hexadecimal (uppercase) |
| **%%**    | Prints a percent sign   |

---

## 📁 Project Structure

* `Makefile` – Handles compilation, cleaning, and rebuilding the library.
* `ft_printf.c` – Core function that parses the format string and calls the appropriate handlers.
* `ft_putchar.c` – Prints a single character to standard output.
* `ft_putstr.c` – Prints a string to standard output.
* `ft_putnbr.c` – Prints a signed integer.
* `ft_putunsigned.c` – Prints an unsigned integer.
* `ft_puthex.c` – Prints a number in hexadecimal format (lowercase and uppercase).
* `ft_putaddress.c` – Prints a pointer's memory address in hexadecimal format.
* `ft_printf.h` – Header file containing function prototypes and required includes.

---

## 🛠️ Compilation

To compile the project:

```
make
```

To clean object files:

```
make clean
```

To clean everything:

```
make fclean
```

To recompile from scratch:

```
make re
```

This will generate `libftprintf.a` which you can link in other projects.

---

## ▶️ Usage

To use **ft_printf** in another project:

```c
#include "ft_printf.h"

int main()
{
    ft_printf("Hello %s! Number: %d\n", "world", 42);
    return (0);
}
```

Compile it with:

```
gcc main.c -L. -lftprintf
```

---

## 👤 Author

**Redouane Hssayn (Finn)/(rhssayn)**
Student at **1337 - 42 Network**

If this project helps you, feel free to ⭐ the repository on GitHub!
