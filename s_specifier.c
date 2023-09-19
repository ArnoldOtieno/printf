#include "main.h"
/**
 * s_specifier - prints characters
 * @c: character passed to the function to print
 * Return: returns 1 for success
 */
int s_specifier(char c)
{
	write(1, &c, 1);
	return (1);
}
