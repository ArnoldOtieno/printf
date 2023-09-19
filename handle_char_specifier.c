#include "main.h"
/**
 * handle_char_specifier - prints characters
 * @mcount: counts the number of times a character is printed out
 * @args: character argument
 * Return: Return 0 to indicate successful handling
 */
int handle_char_specifier(va_list args, int *mcount)
{
	char ch = va_arg(args, int);
	*mcount += s_specifier(ch);
	return (0);
}
