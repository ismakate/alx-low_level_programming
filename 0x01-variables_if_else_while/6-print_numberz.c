#include <stdio.h>

/**
 * Write a program that prints all single
 * digit numbers of base 10 starting from 0,
 * followed by a new line.
 * You are not allowed to use any variable of type char
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
