#include "holberton.h"
/**
 * _putchar - Entry function
 * @c: variable
 *
 * Return: 0.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * printc - Entry function
 * @list: variable
 *
 * Return: 0.
 */
int printc(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);

}
/**
 * print_string - Entry point.
 * @s: variable
 *
 * Return: 0
 */
int print_string(va_list s)
{
	char *str;
	int k;

	str = va_arg(s, char*);
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		for (k = 0; str[k] != '\0'; k++)
		{
			_putchar(str[k]);
		}
	}
	return (k);
}
/**
 * fail - return -1.
 * @un: unused variable.
 *
 * Return: -1.
 */
int fail(__attribute__((unused)) va_list un)
{
	return (-1);
}
