#include "printf.h"

/**
* print_s - prints string
* @str: this is the variable that contains the string
* Return: the number of the string
*/

int print_s(va_list str)
{
	char *s;
	int i;

	s = va_arg(str, char *);
	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
* print_c - prints character
* @str: this is the variable that contains the character
* Return: the number of character
*/

int print_c(va_list str)
{
	char d;

	d = (char) va_arg(str, int);
	_putchar(d);
	return (1);
}
