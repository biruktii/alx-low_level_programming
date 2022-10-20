#include "holberton.h"
/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{

int b, a;
if (n > 0)
{
for (b = 0; b < n; b++)
{
for (a = 0; a < b; a++)
_putchar(' ');
_putchar('\\');
if (b == n - 1)
continue;
_putchar('\n')
}
}
_putchar('\n');
}
