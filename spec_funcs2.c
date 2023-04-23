#include "main.h"

/**
* print_d - prints integer
* @d: this is the variable that contains the string
* Return: the number of characters printed
*/

int print_d(va_list d)
{
	int num, count = 0;

	num = va_arg(d, int);

	if (num == 0)
	{
		_putchar(48);
		return (1);
	}
	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
		count++;
	}

	print_int(num, &count);
	return (count);
}

/**
* print_b - prints binary
* @b: this is the variable that contains the string
* Return: the number of characters printed
*/

int print_b(va_list b)
{
	unsigned int arg;
	int count = 0;

	arg = va_arg(b, unsigned int);
	if (arg == 0)
	{
		_putchar(48);
		return (1);
	}

	print_binary(arg, &count);
	return (count);

}

/**
  * print_int - this prints out integers unto the terminal
  * @count: this counts the number of characters that were printed
  * @num: this is the number that will be printed
  */
void print_int(int num, int *count)
{
	int rem, quo;

	if (num == 0)
	{
		return;
	}
	rem = num % 10;
	quo = num / 10;
	print_int(quo, count);
	_putchar(rem + 48);
	(*count)++;
}

/**
  * print_binary - this prints out binary digits unto the terminal
  * @count: this counts the number of characters that were printed
  * @num: this is the number that will be printed
  */
void print_binary(unsigned int num, int *count)
{
	unsigned int rem, quo;

	if (num == 0)
	{
		return;
	}
	rem = num % 2;
	quo = num / 2;
	print_binary(quo, count);
	_putchar(rem + 48);
	(*count)++;
}
