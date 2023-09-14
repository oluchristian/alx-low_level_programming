#include "function_pointers.h"
void print_normal(char*name)
{
int i = 0;
while (name[i] != '\0')
{
putchar(name[i]);
i++;
}
}
void print_name(char *name, void (*f)(char *))
{
f(name);
}

