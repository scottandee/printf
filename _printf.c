#include "main.h"

/**
 * _printf - This prints out formatted output
 * @format: This is the proposed format to be printed
 * @...: This contains the variables to be put into the formatted output
 * Return: word count if successful, -1 if failure
 */

int _printf(const char *format, ...)
{
	int wc = 0, i = 0, spe_count = 0;
	va_list vars;
	int (*f)(va_list);

	if (!format)
	{
		return (-1);
	}
	va_start(vars, format);

	while (format[i] != '\0')
	{
		if (!format[i])
			return (wc);
		if (format[i] == '%')
		{
			f = get_spec_funcs(&format[i + 1]);
			if (f != NULL)
			{
				spe_count = f(vars);
				wc += spe_count;
				i += 2;
				continue;
			}
			if (format[i + 1] == '%')
			{
				_putchar('%');
				i += 2;
				wc += 1;
				continue;
			}
		}
		_putchar(format[i]);
		i++;
		wc++;
	}
	va_end(vars);
	return (wc);
}
