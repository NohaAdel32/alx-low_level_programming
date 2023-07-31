#include"main.h"

/**
 * _memcpy - copys n bytes of memory
 * @dest: pointer of string
 * @src: pointer of copy string
 * @n: size of character copy
 * Return: pointer to beginning of memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *r = dest;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (r);
}
