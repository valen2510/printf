#include "holberton.h"
/**
 *
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
/**
 *
 */
void printc(va_list list)
{
	_putchar(va_arg(list, int));
}

