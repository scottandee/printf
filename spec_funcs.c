#include "main.h"

/**
* print_s - prints string
* @s: this is the variable that contains the string
* Return: the number of the string
*/

int print_s(va_list s)
{
	char *str;
	int i;

	str = va_arg(s, char *);
	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
* print_c - prints character
* @c: this is the variable that contains the character
* Return: the number of character
*/

int print_c(va_list c)
{
	char d;

	d = (char)va_arg(c, int);
	_putchar(d);
	return (1);
}
