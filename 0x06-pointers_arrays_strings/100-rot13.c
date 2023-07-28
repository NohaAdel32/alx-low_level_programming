#include"main.h"

/**
 * rot13 - Encode a string to rot13
 * @s: string to encode
 * Return: pointer to encoded string
 */

char *rot13(char *s)
{
	char *r = s;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*s != '\0')
	{
		for (i = 0; a[i] != '\0'; i++)
		{
			if (*s == a[i])
			{
				*s = b[i];
			}
		}
		s++;
	}
	return (r);
}
