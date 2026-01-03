*This project has been created as part of the 42 curriculum by nibrahee*

# Libft

## Description
This project is part of the 42 curriculum and focuses on the creation of a custom library in C language.
the library created called "libft" containes a set of functions from the standard C library (libc) with the same prototypes and behaviors as the originals. the only difference is that the fuctions will have
the 'ft_' prefix.

The goal of rewriting these functions is to design,implement and get better understanding of how these functions actully work.In addition to use the fuctions in the comming projects.

# Included Functions

## Functions to check and manipulate characters:

- ft_isalpha - checks for an alphabetic character.
- ft_isdigit - checks for a digit.
- ft_isalnum - checks for an alphanumeric character.
- ft_isascii - checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
- ft_isprint - checks for any printable character including space.
- ft_toupper - converts lowercase letters to uppercase.
- ft_tolower - convert uppercase letters to lowercase.

## Functions manipulates strings:

- ft_strlen - returnes the length of a string without including the null terminator.
- ft_strlcpy - copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.
- ft_strlcat - appends the NUL-terminated string src to the end of dst.
- ft_strchr - returns a pointer to the first occurrence of a character in a string.
- ft_strrchr - returns a pointer to the last occurrence of a character in a string.
- ft_strncmp - compares two strings, up to a given length.
- ft_strnstr - locates the first occurence of a substring in a string.
- ft_substr - returnes a substring from string, where the substring starts at a specified index and has a max size.
- ft_strjoin - returnes a new string from the concatenation of two strings.
- ft_strtrim - returnes a copy of a string where characters specified in a set removed from the beginning and the end of the string.
- ft_strsplit - returnes an array of strings obtained by splitting a string using the character as a delimiter.
- ft_strmpi - returnes a string that collects the results from the successive application of a function on a string.
- ft_striteri - applies a function on each character of string passed as argument.
- ft_strdup - returns a pointer to a new string which is a duplicate of a string.

## Functions manipulates Memory:

- ft_calloc - allocates memory for an array of elements,initializing all bytes to zero.
- ft_bzero - set the first part of an object to null bytes (filling it with zero).
- ft_memset - function fills the first n bytes of the memory area pointed to by s with the constant byte c.
- ft_memcpy - copies n bytes from memory area src to memory area dest.
- ft_memmove - copies n bytes from memory area src to memory area dest.
- ft_memchr - return a pointer to the matching byte.
- ft_memcmp - compares the first n bytes of two memory areas.

## Functions manipulates numbers:

- ft_atoi - converts ASCII string to integer.
- ft_itoa - converts from integer to ASCII.

## File descriptor Functions:

- ft_putchar_fd - outputs a character to a given file descriptor.
- ft_putstr_fd - outputs a string to a given file descriptor.
- ft_putendl_fd - outputs a string followed by a newline to a given file descriptor.
- ft_putnbr_fd - outputs a number to a given file descriptor.

## Linked List Functions:

- ft_lstnew - returnes a new node.
- ft_lstadd_front - adds a new node to the beginning of the list.
- ft_lstsize - returnes the number of nodes in a list.
- ft_lslast - returnes the last node of a list.
- ft_lstadd_back - adds a new node to the end of a list.
- ft_lstdelone - frees the content of a given node.
- ft_lstclear - Deletes and frees the given node and all its successors.
- ft_lstiter - iterates through a list and applies a given function to the content of each node.
- ft_lstmap - returnes a new list resulting the successive application of a given function to each node content of a given list.

# Instructions

- To use the functions from this library just make sure to include the header file:
#include "libft.h"

- To compile and run the library use the command:
```bash
make
```
- To clean object files:
```bash
make clean
```

- To remove all complied files:
```bash
make fclean
```

- To recompile from scratch:
```bash
make re
```

# Resources
- geeks for geeks website.
- github.
- Linux manual pages.

# Ai usege
- clarifying theoretical concepts.
- reviewing code structure and logic.
- improving documentation clarity.
