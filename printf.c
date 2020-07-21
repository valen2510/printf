#include "holberton.h"
/**
 * _printf - printf function.
 * @format: variable
 *
 * Return: 0.
 */
int _printf(const char *format, ...)
{
print_f printf[] = {
	{"c", printc},
	{"s", print_string},
	{NULL, NULL}
	};

	va_list list;
	unsigned int i = 0, j = 0;

	if (format == NULL)
		return (-1);

	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; printf[j].p != NULL; j++)
			{
				if (format[i + 1] == printf[j].p[0])
				{
					printf[j].func(list);
					i++;
				}
			}
		}
		else
		{
			_putchar(format[i]);
		}
}
va_end(list);
return (0);
}
