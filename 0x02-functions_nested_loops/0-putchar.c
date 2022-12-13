#include "main.h"

/**
 * main - program prints _putchar
 * Return: Always 0 (Success)
 */
int _putchar(char n);
{
	int n = 0;
	char pc_str[] = "_putchar";

	while (n < 8)
	{
		_putchar(pc_str[n]);
		n += 1;

	}
	_putchar('\n');

	return (0);
}
