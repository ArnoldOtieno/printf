#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_binary(unsigned int n);
char *decimal_to_binary(unsigned int n);
int _puts(char *str);
void _putchar(char c);

#endif /* MAIN_H */
