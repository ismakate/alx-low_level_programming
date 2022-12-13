#include "main.h"

/**
 * main - computes and prints the sum of all multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int multi = 0;
	int res = 0;

	while (multi < 1024)
	{
		if (multi % 3 == 0 || multi % 5 == 0)
		{
			res += multi;
		}
		multi += 1;
	}
	printf("%d\n", res);
	return (0);
}