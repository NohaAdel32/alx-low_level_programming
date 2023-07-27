#include"main.h"

/**
 * leet - encode string to 1337
 * @s: string to encode
 * Return: pointer to encoded string
 */

char *leet(char *s)
{
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {4, 3, 0, 7, 1};
	int i;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if ((*s == a[i]) || (*s == a[i] - 32))
			{
				*s = n[i] + 48;
			}
		}
		s++;
	}
	return (s);
}
