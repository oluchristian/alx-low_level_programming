#include "main.h"
/**
 * more_numbers - prints 10x numbers 0 to 14
 */
void more_numbers(void)
{
int i, j;
i = 0;
while (i < 10)
{
for (j = 0; j <= 14; j++)
{
_putchar(j + '0');
}
_putchar('\n');
i++;
}
}