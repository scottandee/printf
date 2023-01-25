#include "printf.h"
#include <string.h>

/**
* get_spec_funcs - this picks out the correct format specifier
* @s: this is the format specifier
* Return: NULL if failure and correct funtion specifier if successful
*/

int (*get_spec_funcs(const char *s))(va_list)
{
	spec functions[] = {
		{"s", print_s},
		{"c", print_c},
		{NULL, NULL}
	};
	int i = 0;

	while (functions[i].str != NULL)
	{
		if (strcmp(functions[i].str, s) == 0)
		{
			return (functions[i].func);
		}
		i++;
	}
	return (NULL);
}
