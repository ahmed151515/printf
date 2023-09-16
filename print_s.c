#include "main.h"
/**
 * print_s - print string
 * @s: string
 * Return: int
 */
int print_s(char *s)
{
	return (write(1, s, strlen(s)));
}
