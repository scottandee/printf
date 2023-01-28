#include "main.h"
#include <stdio.h>

/**
 * main - entry point function
 * Return: 0
 */
int main(void)
{
	_printf("%%");
	printf("Character:[%c]\n", 'H');
	_printf("String:[%r]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Complete the sentence: You %r nothing, Jon Snow.\n", "");
	_printf("%r", "\nThis sentence is retrieved from va_args!");
	_printf("Complete the sentence: You %r nothing, Jon Snow.\n", "know");

	return (0);
}
