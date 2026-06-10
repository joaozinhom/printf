*This project has been created as part of the 42 curriculum by joamoren.*

# libft

A personal C library built from scratch as part of the 42 curriculum.
The idea is simple: reimplement standard libc functions yourself so you actually understand what they do, then keep the library for future projects.

---

## How to build

make        — builds libft.a
make clean  — removes object files
make fclean — removes everything
make re     — rebuilds from scratch

To use it in another project:
cc your_file.c libft.a -o your_program

---

## Files

ft_isalpha.c    — checks if a character is alphabetic (a-z or A-Z)
ft_isdigit.c    — checks if a character is a decimal digit (0-9)
ft_isalnum.c    — checks if a character is alphanumeric
ft_isascii.c    — checks if a character is part of the ASCII table
ft_isprint.c    — checks if a character is printable

ft_strlen.c     — returns the length of a null-terminated string
ft_memset.c     — fills a memory area with a given byte value
ft_bzero.c      — sets a memory area to zero
ft_memcpy.c     — copies n bytes from one memory area to another
ft_memmove.c    — same as memcpy but handles overlapping memory areas
ft_memchr.c     — scans memory for the first occurrence of a byte
ft_memcmp.c     — compares two memory areas byte by byte

ft_strlcpy.c    — size-bounded string copy, always null-terminates
ft_strlcat.c    — size-bounded string concatenation
ft_strchr.c     — finds first occurrence of a character in a string
ft_strrchr.c    — finds last occurrence of a character in a string
ft_strncmp.c    — compares two strings up to n characters
ft_strnstr.c    — finds a substring within a string, length-bounded
ft_strdup.c     — duplicates a string using malloc

ft_toupper.c    — converts a lowercase letter to uppercase
ft_tolower.c    — converts an uppercase letter to lowercase
ft_atoi.c       — converts a string to an integer
ft_calloc.c     — allocates memory and initializes it to zero

ft_substr.c     — allocates and returns a substring from a string
ft_strjoin.c    — allocates and returns the concatenation of two strings
ft_strtrim.c    — trims characters from the start and end of a string
ft_split.c      — splits a string by a delimiter into an array of strings
ft_itoa.c       — converts an integer to its string representation
ft_strmapi.c    — applies a function to each character, returns new string
ft_striteri.c   — applies a function to each character in place

ft_putchar_fd.c — outputs a character to a file descriptor
ft_putstr_fd.c  — outputs a string to a file descriptor
ft_putendl_fd.c — outputs a string followed by a newline to a file descriptor
ft_putnbr_fd.c  — outputs an integer to a file descriptor

ft_lstnew.c       — allocates and returns a new linked list node
ft_lstadd_front.c — adds a node at the beginning of a list
ft_lstsize.c      — counts the number of nodes in a list
ft_lstlast.c      — returns the last node of a list
ft_lstadd_back.c  — adds a node at the end of a list
ft_lstdelone.c    — frees a single node using a given delete function
ft_lstclear.c     — frees all nodes of a list and sets pointer to NULL
ft_lstiter.c      — applies a function to the content of each node
ft_lstmap.c       — creates a new list by applying a function to each node

---

## Resources

man pages — main reference for all reimplemented functions, and the man command itself
https://man7.org/linux/man-pages/

cppreference — C standard library
https://en.cppreference.com/w/c

linked lists in C
https://www.geeksforgeeks.org/linked-list-in-c/
