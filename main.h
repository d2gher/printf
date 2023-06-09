#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;


int _putchar(char c);
int printf_string(va_list val);
int printf_char(va_list val);
int printf_37(void);
int printf_int(va_list args);
int printf_dec(va_list args);
int _printf(const char *format, ...);

#endif