#include "main.h"
/**
 * handle_int_specifier - prints integer
 * @args: integer argument
 * @mcount: counts successful times integer is outputed
 * Return: 0 for success and -1 for failure
 */
int handle_int_specifier(va_list args, int *mcount)
{
	int num = va_arg(args, int);
	char buffer[20];
	int length = snprintf(buffer, sizeof(buffer), "%d", num);
	int i;

	if (length >= 0)
	{
		for (i = 0; i < length; i++)
		{
			*mcount += s_specifier(buffer[i]);
		}
		return (0);
	}
	else
	{
		return (-1);
	}
}

