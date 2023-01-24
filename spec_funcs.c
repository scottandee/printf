#include "printf.h"

/**
* print_s - prints string
* @va_list: this is the variable that contains the string
* Return: the number of the string
*/

int print_s(va_list str)
{
	char *s;
	int i;

	s = va_arg(str, char *);
	i = 0;
	while (s[i] != '0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
* print_c - prints character
* @va_list: this is the variable that contains the character
* Return: the number of character
*/

int print_c(va_list c)
{
	char d;

	d = (char) va_arg(c, int);
	_putchar(d);
	return (1);
}
