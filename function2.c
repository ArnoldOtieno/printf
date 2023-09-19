#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - custom printf function with limited format specifiers
 * @format: a string containing format specifiers
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int printed_chars = 0;

va_start(args, format);

while (*format)
{
if (*format != '%')
{
_putchar(*format);
printed_chars++;
}
else
{
format++;
if (*format == 'b')
{
unsigned int num = va_arg(args, unsigned int);
printed_chars += print_binary(num);
}
else
{
_putchar('%');
_putchar(*format);
printed_chars += 2;
}
}
format++;
}

va_end(args);

return (printed_chars);
}

/**
 * print_binary - prints an unsigned integer in binary format
 * @n: the unsigned integer to print
 *
 * Return: the number of characters printed
 */
int print_binary(unsigned int n)
{
int printed_chars = 0;
char *binary_str = NULL;

if (n == 0)
{
_putchar('0');
printed_chars++;
return (1);
}

binary_str = decimal_to_binary(n);

if (binary_str)
{
printed_chars += _puts(binary_str);
free(binary_str);
}

return (printed_chars);
}

/**
 * decimal_to_binary - converts a decimal number to a binary string
 * @n: the decimal number to convert
 *
 * Return: a string containing the binary representation of n
 */
char *decimal_to_binary(unsigned int n)
{
char *binary_str = NULL;
int binary_len = 0;
int i = 0;

if (n == 0)
{
binary_str = malloc(2);
if (binary_str)
binary_str[0] = '0';
return (binary_str);
}

while (n > 0)
{
binary_len++;
n >>= 1;
}

binary_str = malloc(binary_len + 1);

if (!binary_str)
return (NULL);

for (i = binary_len - 1; i >= 0; i--)
{
binary_str[i] = (n & 1) ? '1' : '0';
n >>= 1;
}

binary_str[binary_len] = '\0';

return (binary_str);
}

/**
 * _puts - prints a string
 * @str: the string to print
 *
 * Return: the number of characters printed
 */
int _puts(char *str)
{
int printed_chars = 0;

while (*str)
{
_putchar(*str);
printed_chars++;
str++;
}

return (printed_chars);
}

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 */
void _putchar(char c)
{
write(1, &c, 1);
}
