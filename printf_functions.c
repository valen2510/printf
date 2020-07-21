#include "holberton.h"
/**
 * _putchar - Entry function. Write characteres
 * @c: variable va_list
 *
 * Return: Writed character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * printc - Entry function. Print character
 * @list: variable va_list
 *
 * Return: 1 (nbyte)
 */
int printc(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);

}
/**
 * print_string - Entry point. Print string
 * @s: variable va_list
 *
 * Return: k (nbytes) 6 (NULL)
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
 * print_n - Entry point. Print number
 * @n: Variable va_list
 *
 * Return: count (nbytes)
 */
int print_n(va_list n)
{

	long int num;
	int count, aux, b;

	count = 0;
	num = va_arg(n, int);

	if (num < 0)
	{
		num *= -1;
		_putchar(45);
		count++;
	}
	if (num >= 0 && num <= 9)
	{
		_putchar(num + 48);
		count++;
	}
	if (num > 9)
	{
		b = 10;

		while (num / b > 9)
		{
			b *= 10;
		}

		while (b > 0)
		{
			aux = num / b;
			num = num % b;
			_putchar(aux + 48);
			b = b / 10;
			count++;
		}
	}
	return (count);
}
