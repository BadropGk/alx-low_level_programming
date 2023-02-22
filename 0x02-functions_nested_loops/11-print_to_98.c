#include "main.h"

/**
* add - Adds two values
* @n1: The first number to be computed
* @n2: The second number to be computed
* Return: Integer value
*/
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n == 98)
continue;
printf(", ");
}
printf("\n");
}
else
}
for (; n >= 98; n--)
{
printf("%d", n);
if (n ==   98)
continue;
printf(", ");
}
printf("\n");
}
}
