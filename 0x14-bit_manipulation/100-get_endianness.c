#include "main.h"
#include <stdio.h>
/**
 *    get_endianness - returns processor endianness
 *      Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
int n = 1;
return (*((char *) &n) + '0');
}
