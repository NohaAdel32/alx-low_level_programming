#include"main.h"

/**
 * *_strncpy -  copies a string
 * @dest: a string
 * @src: a copy string
 * @n: number of copy
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;
	int i = 0;

	for (c = 0; (c < n) && (src[c] != '\0'); c++)
	{
		dest[i] = src[c];
		i++;
	}
	return (dest);
}

