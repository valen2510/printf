#include "holberton.h"
/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	print_f printf[] = {
		{"c", printc},
		{NULL, NULL}
	};

	va_list list;
	unsigned int i = 0, j = 0;
	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
        {
                if (format[i] == '%')
                {
                  if (format[i + 1] == '%')
                  {
                    _putchar('%');
                    i++;
                  }
                  else if (comp_f(format, i + 1) != NULL)
                  {
                    j += (comp_f(format, i + 1))(list);
                  }
                  else
                  {
                    _putchar(format[i]);
                  }
                }
        }
}

int (*comp_f(const char *a, int ubc))
{
  print_f pu[] = {
    {"c", printc},
    {NULL, NULL}};
    
    unsigned int k;
    for (k = 0, pu[k].p != NULL, k++)
    {
      if (pu[k].p[0] == a[ubc])
        {
          return (pu[k].func);
        }
    }
    return (NULL);
}

int main(void)
{
    
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");

    return (0);
}
