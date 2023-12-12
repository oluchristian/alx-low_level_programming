#include "main.h"  // Include the header file with function prototypes
#include <stdio.h> // Include necessary header files

void _puts(char *s) {
    while (*s != '\0') {
        putchar(*s); // Print each character of the string
        s++; // Move to the next character
    }
    putchar('\n'); // Print a newline at the end
}

