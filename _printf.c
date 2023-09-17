#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Custom printf function
 * @format: The format string
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int char_count = 0;
   while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
                case 'c':
                {
                    char c = va_arg(args, int);
                    putchar(c);
                    char_count++;
                    break;
                }
                case 's':
                {
                    char *str = va_arg(args, char *); // Fetch a string argument
                    while (*str != '\0')
                    {
                        putchar(*str); // Print each character in the string
                        str++;
                        char_count++;
                    }
                    break;
                }
                case '%':
                {
                    putchar('%'); // Print a literal '%'
                    char_count++;
                    break;
                }
                default:
                    putchar('%'); // Print the '%' character followed by the unknown specifier
                    putchar(*format);
                    char_count += 2;
                    break;
}
}
else
{
putchar(*format);
char_count++;
}
format++;
}

va_end(args);
return (char_count);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int count = _printf("Hello, %s! The character is %c. This is a percent sign: %%.\n", "world", 'A');
printf("Total characters printed: %d\n", count);
return (0);
}
