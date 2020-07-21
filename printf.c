#include "holberton.h"
/**
 * _printf - printf function.
 * @format: variable
 *
 * Return: nbytes printed.
 */
int _printf(const char *format, ...)
{
	va_list list;
	unsigned int i = 0, j = 0;

	if (!format)
		return (-1);

	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			else if (format[i + 1] == '%')
			{
				_putchar('%');
				j++;
				i++;
			}
			else if (cmp_func(format[i + 1]) != NULL)
			{
				j += (cmp_func(format[i + 1]))(list);
				i++;
			}
			else
			{
				_putchar(format[i]);
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			j++;
		}
	}
	va_end(list);
	return (j);
}

/**
 * cmp_func - Entry point
 * @a: character.
 *
 * Return: 0.
 */
int (*cmp_func(const char a))(va_list)
{
	print_f printf[] = {
		{'c', printc},
		{'s', print_string},
		{'d', print_n},
		{'i', print_n},
		{'\0', NULL}
	};

	int k;

	for (k = 0; printf[k].p != '\0'; k++)
	{
		if (printf[k].p == a)
		{
			return (printf[k].func);
		}
	}

	return (0);
}
