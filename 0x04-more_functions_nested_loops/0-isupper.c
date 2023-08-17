#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
char c;
c = 'A';
_putchar('A');
_putchar(':');
_putchar(' ');
_putchar(_isupper(c));
_putchar('\n');
c = 'a';
_putchar('A');
_putchar(':');
_putchar(' ');
_putchar(_isupper(c));
_putchar('\n');
return (0);
}
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
