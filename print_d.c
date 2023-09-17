#include "main.h"
/**
 * print_d - print_d
 * @n: int
 * Return: int
 */
int print_d(int n)
{
	char s[12];
	int len;

	len = sprintf(s, "%d", n);

	write(1, s, len);

	return (len);
}
