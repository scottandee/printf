#ifndef _MAIN_H
#define _MAIN_H

#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

/**
* struct specifier - this contains the specifiers
* @str: this is the specifier name
* @func: this is the function of the format specifier
*
* Description: this struct takes in all of the format specifier functions
*/
typedef struct specifier
{
	char *str;
	int (*func)(va_list);
} spec;

int _printf(const char *format, ...);
int _putchar(char c);
int print_s(va_list s);
int print_r(va_list r);
int print_c(va_list c);
int print_R(va_list R);
int print_d(va_list d);
int print_b(va_list b);
int (*get_spec_funcs(const char *s))(va_list);
void print_int(int num, int *count);
void print_binary(unsigned int num, int *count);


#endif  /*_MAIN_H*/
