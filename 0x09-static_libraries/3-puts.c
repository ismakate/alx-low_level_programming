#include "main.h"

/**
 *_puts -  prints a string, followed by a new line, to stdout.
 * @str: string to be printed
 * Return: 0 (Success)
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
 	
		_putchar('\n');
}
