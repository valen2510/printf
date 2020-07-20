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
int _putchar(char c);

/**
 * struct types - specifier structure for printf 
 * @p: pointer to characteres specifiers
 * @func : function pointer to print fucntions
 */
typedef struct types
{
	char *p;
	int (*func)(va_list);
}types;

#endif /* Holberton_h */
