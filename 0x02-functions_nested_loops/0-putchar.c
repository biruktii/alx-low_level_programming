#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'character'
 *
 * Return: Always 0 (Success)
 */
void _putchar(int);

int main(void)
{

char *pu = "_putchar";
while (*pu)
{
_putchar(*pu);
pu++;
}
_putchar('\n');
return (0);
}
