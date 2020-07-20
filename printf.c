#include "holberton.h"
/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	types printf[] = {
		{"c", printc},
		{NULL, NULL}
	};

	unsigned int i, j;
	va_list list;

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
