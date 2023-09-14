#include "function_pointers.h"
/**
 *print_normal - prints name char
 *print_name- print name using pointer to function
 *@name: name to print
 */
void print_normal(char *name)
{
int i = 0;
while (name[i] != '\0')
{
_putchar(name[i]);
i++;
}
}
void print_name(char *name, void (*f)(char *))
{
f(name);
}

