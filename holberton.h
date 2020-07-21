#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printc(va_list l);
int print_string(va_list s);

/**
 * struct types - specifier structure for printf
 * @p: pointer to characteres specifiers
 * @func : function pointer to print fucntions
 */
typedef struct types
{
	char *p;
	int (*func)(va_list);
} print_f;

#endif /* Holberton_h */
