#include <stdio.h>
/**
 * Write a program that prints all possible different combinations of two digits.
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 ** 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
*/
int main(void)
{
	int n, o;

	for (n = 10; n <= 18; n++)
	{
		for (o = 11; o <= 19; o++)
		{
			if (o > n)
			{
				putchar(n);
				putchar(o);
				if (n != 18 || m != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
