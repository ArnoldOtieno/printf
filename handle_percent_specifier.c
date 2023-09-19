#include "main.h"
/**
 * handle_percent_specifier - prints a percentage
 * @mcount: counts the number of times % has been outputed
 * Return: Return 0 to indicate successful handling
 */
int handle_percent_specifier(int *mcount)
{
	*mcount += s_specifier('%');
	return (0);
}
