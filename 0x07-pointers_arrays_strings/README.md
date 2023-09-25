# C - Even more pointers, arrays, and strings

This repository contains C programs that implement various functions for handling pointers, arrays, and strings. These functions are meant to mimic some of the functionality provided by standard library functions in C. Below is a summary of the tasks and their corresponding functions:

### Task 0: memset
Function: `_memset`
- Prototype: `char *_memset(char *s, char b, unsigned int n)`
- Description: Fills the first n bytes of the memory area pointed to by s with the constant byte b.
- Returns a pointer to the memory area s.

### Task 1: memcpy
Function: `_memcpy`
- Prototype: `char *_memcpy(char *dest, char *src, unsigned int n)`
- Description: Copies n bytes from memory area src to memory area dest.
- Returns a pointer to dest.
- Note: Similar to the standard library function memcpy.

### Task 2: strchr
Function: `_strchr`
- Prototype: `char *_strchr(char *s, char c)`
- Description: Locates the first occurrence of the character c in the string s, or returns NULL if not found.
- Note: Similar to the standard library function strchr.

### Task 3: strspn
Function: `_strspn`
- Prototype: `unsigned int _strspn(char *s, char *accept)`
- Description: Gets the length of a prefix substring consisting only of bytes from accept in the string s.
- Returns the number of matching bytes.
- Note: Similar to the standard library function strspn.

### Task 4: strpbrk
Function: `_strpbrk`
- Prototype: `char *_strpbrk(char *s, char *accept)`
- Description: Searches the string s for the first occurrence of any byte in the string accept.
- Returns a pointer to the matching byte in s or NULL if none found.
- Note: Similar to the standard library function strpbrk.

### Task 5: strstr
Function: `_strstr`
- Prototype: `char *_strstr(char *haystack, char *needle)`
- Description: Locates the first occurrence of the substring needle in the string haystack.
- Returns a pointer to the beginning of the located substring or NULL if not found.
- Note: Similar to the standard library function strstr.

### Task 6: Chess is mental torture
Function: `print_chessboard`
- Prototype: `void print_chessboard(char (*a)[8])`
- Description: Prints a chessboard represented by a 2D array of characters.

### Task 7: The line of life is a ragged diagonal between duty and desire
Function: `print_diagsums`
- Prototype: `void print_diagsums(int *a, int size)`
- Description: Prints the sum of the two diagonals of a square matrix of integers.
- Format: See example in the source code.
- Note: Uses a square matrix represented as a 1D array.

### Task 8: Double pointer, double fun
Function: `set_string`
- Prototype: `void set_string(char **s, char *to)`
- Description: Sets the value of a pointer to a char.

### Task 9: My primary goal of hacking was the intellectual curiosity, the seduction of a
Description: This task involves creating a file that contains the password for the `crackme2` executable. Follow the instructions in the task description for more details.

**Note:** You may need to install the openssl library as mentioned in the instructions for Task 9.

Feel free to explore and use these functions as needed in your C projects.
