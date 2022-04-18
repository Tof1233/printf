#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/
typedef struct print
{
	char *c;
	int (*f)(va_list);
} print_f;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_option(const char *format))(va_list);
int print_c(va_list c);
int print_s(va_list s);
int print_d(va_list d);
int print_i(va_list i);
int print_binary(va_list b);

#endif
