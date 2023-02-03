#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;


int _printf(const char *format, ...);
int ev_print_func(const char *s, int index);
int print_str(va_list arguments, char *buf, unsigned int ibuf);
int print_chr(va_list arguments, char *buf, unsigned int ibuf);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);


#endif
