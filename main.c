#include "printf.h"

/**
* _printf - this is the main printf function
* @format: this is the proposed format of string to be printed
* @...: these are the variable arguments for format specifiers
* Return: 0;
*/

int _printf(const char *format, ...)
{
	va_list vars;
	int (*f)(va_list);
	int i, count;

	va_start(vars, format);

	if (format == NULL)
	{
		return (-1);
	}
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}
		else if (format[i] == '%')
		{
			f(vars) = get_spec_funcs(&format[i + 1])(va_list);
			count = count + f(vars);
			if (!f(vars))
			{
				return (-1);
			}
			i = i + 2;
		}
		else
		{
			_putchar(format[i]);
			i++;
		}
	}
	return (i + count);
}