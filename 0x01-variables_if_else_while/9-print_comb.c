#include <stdio.h>

/**
Write a program that prints all possible combinations of single-digit numbers.
Numbers must be separated by ,, followed by a space
*/  
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
}
		putchar('\n');
		return (0);
}
