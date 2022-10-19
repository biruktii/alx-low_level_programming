#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'character'
 *
 * Return: Always 0 (success)
 */
int  _putchar(char);

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
