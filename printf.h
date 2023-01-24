#ifndef PRINTF_H
#define PRINTF_H
#include <string.h>
#include <stdarg.h>
/**
* struct specifier - this contains the specifiers
* @str: this is the specifier name
* @f: this is the function of the format specifier
*
* Description: this struct takes in all of the format specifier functions
*/
typedef struct specifier
{
	char *str;
	int (*func)(va_list h);
} spec;
int _printf(const char *format, ...);
int _putchar(char c);
int print_s(va_list);
int print_c(va_list);
int (*get_spec_funcs(const char *s))(va_list);


#endif  /*PRINTF_H*/
