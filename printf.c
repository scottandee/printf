#include "main.h"

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
	int i = 0, count = 0;

	va_start(vars, format);

	if (format == NULL)
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			f = get_spec_funcs(&format[i + 1]);
			if (f != NULL)
			{
				count += f(vars);
				i += 2;
				continue;
			}
		}
		_putchar(format[i]);
		i++;
		count++;
	}
	return (count);
	/*while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		f = get_spec_funcs(&format[i + 1]);

		if (f != NULL)
		{
			count += f(vars);
			i = i + 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	return (count);
	*/
}
