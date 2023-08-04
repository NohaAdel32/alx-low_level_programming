#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: a string
 * @src: a string
 * @n: number of byte to src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int c2;

	while (dest[c] != '\0')
		c++;

	for (c2 = 0; (c2 < n) && (src[c2] != '\0'); c2++)
	{
		dest[c] = src[c2];
		c++;
	}
	return (dest);
}
