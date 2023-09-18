#include "main.h"
/**
 * _printf - like printf
 * @format: srintg
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int len = strlen(format);

	if (format == NULL)
		return (-1);
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
					break;
				case 's':
					len += print_s(va_arg(arg, char *));
					break;
				case '%':
					print_c('%');
					break;
				case 'd':
					len += print_d(va_arg(arg, int));
					break;
				case 'i':
					len += print_d(va_arg(arg, int));
					break;
			}
			format++;
			len--;
		}
		else
		{
			print_c(*format);
			format++;
		}
	}
	va_end(arg);
	return (len);
}
