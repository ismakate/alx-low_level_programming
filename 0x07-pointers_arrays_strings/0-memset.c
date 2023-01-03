#include "main.h"

/**
 *_memset - function fills memory with constant byte
 *@s: char * pointer
 *@b: char constant byte
 *@n: unsigned int of bytes
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * declare an unsigned int
	 * because we are storing a
	 * value that will always be
	 * non-negative (zero or positive)
	*/
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
