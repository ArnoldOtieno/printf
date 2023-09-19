#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 */
void _putchar(char c)
{
write(1, &c, 1);
}
