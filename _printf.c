#include "main.h"
/**
 * _printf - our custom printf function
 * @format: arguments for custom printf
 * @...: arguments passed
 * Return: returns total number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int mcount = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			mcount += s_specifier(*format);
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				if (handle_char_specifier(args, &mcount) != 0)
					va_end(args);
					return (-1);
			}
			else if (*format == '%')
			{
				if (handle_percent_specifier(&mcount) != 0)
					va_end(args);
					return (-1);
			}
			else if (*format == 'd' || *format == 'i')
			{
				if (handle_int_specifier(args, &mcount) != 0)
				{
					va_end(args);
					return (-1);
				}
			}
		}
		format++;
	}
	va_end(args);
	return (mcount);
}
