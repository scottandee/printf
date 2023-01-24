#include "printf.h"
#include <stdio.h>

int main(void)
{
	_printf("Character:[%c]", 'H');
	printf("Character:[%c]", 'H');
	_printf("String:[%s]", "I am a string !");
	printf("String:[%s]", "I am a string !");

	return (0);
}
