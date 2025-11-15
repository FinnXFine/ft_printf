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

* `src/` contains all core functions:

  * parsing
  * formatting handlers
  * printing utilities
* `includes/` contains `ft_printf.h`
* `Makefile` handles compilation and cleaning

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

**Redouane Hssayn (Finn)**
Student at **1337 - 42 Network**

If this project helps you, feel free to ⭐ the repository on GitHub!
