#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
int s_specifier(char c);
int handle_char_specifier(va_list args, int *mcount);
int handle_percent_specifier(int *mcount);
int handle_int_specifier(va_list args, int *mcount);
int _printf(const char *format, ...);
#endif
