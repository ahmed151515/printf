#include "main.h"
/**
 * _printf - like printf
 * @format: srintg
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list arg;
	
	/* i made count_% to select last argument */
	va_start(arg, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					print_c(va_arg(arg, int));
					format++;
			}

		}
		else
		{
			print_c(*format);
			format++;
		}
	}
	va_end(arg);
	return (0);
}
