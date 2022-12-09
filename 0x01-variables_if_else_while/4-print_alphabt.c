#include <stdio.h>

/**
 * Write a program that prints the alphabet
 * in lowercase, followed by a new line.
 * Print all the letters except q and e
*/

int main (void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
		putchar('\n');
		return (0);
}
