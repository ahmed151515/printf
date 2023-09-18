#include "main.h"
/**
 * print_s - print string
 * @s: string
 * Return: int
 */
int print_s(char *s)
{
	if (s == NULL)
	{
		s = "(null)";
	}
	write(1, s, strlen(s));
	return (strlen(s) - 1);
}
