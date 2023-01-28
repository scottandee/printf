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
	if (str == NULL)
		str = "(null)";
	while (str[i])
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

/**
* print_r - prints reverse string
* @r: this is the variable that contains the string
* Return: the number of characters
*/

int print_r(va_list r)
{
	char *s;
	int i, length = 0;

	s = va_arg(r, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[length] != '\0')
	{
		length++;
	}
	if (length == 0)
	{
		_putchar('%');
		_putchar('r');
		return (0);
	}
	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	return (length);

}

/**
 * print_R - prints a string in ROT13
 * @R: string to print
 * Return: numbers of characters printed
 */

int print_R(va_list R)
{
	char *s;
	unsigned int i, j;
	int count = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	s = va_arg(R, char *);
	if (s == NULL)
	{
		s = "(ahyy)";
	}
	for (i = 0; s[i]; i++)
	{
		for (j = 0; in[j]; j++)
		{
			if (in[j] == s[i])
			{
				_putchar(out[j]);
				count++;
				break;
			}
		}
		if (!in[j])
		{
			_putchar(s[i]);
			count++;
		}
	}
	return (count);
}
