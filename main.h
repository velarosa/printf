#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int _printf(const char *format, ...);
int conversion(char specifier, va_list args);
int print_char(int c);
int print_str(char *str);

#endif
