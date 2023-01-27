#include "main.h"
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
		if (*(functions[i].str) == *s)
		{
			return (functions[i].func);
		}
		i++;
	}
	return (NULL);
}
