#include "holberton.h"
/**
 * _putchar - Entry function
 * @c: variable
 * return: print.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
/**
 * printc - Entry function
 * @list: variable
 *
 * return: integer.
 */
int printc(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

