#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int printc(char c);

/**
 * struct types - specifier structure for printf 
 * @p: pointer to characteres specifiers
 * @func : function pointer to print fucntions
 */
typedef struct types
{
	char *p;
	void (*func)(va_list);
};

#endif /* Holberton_h */
