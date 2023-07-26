#include"main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */

int _atoi(char *s)
{
	unsigned int sum = 0;
	int count;
	char sign = 1;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		else if ((*s >= '0') && (*s <= '9'))
			break;
		else if ((*s < '0') && (*s > '9'))
			break;
		s++;
	}
	while ((*s >= '0') && (*s <= '9'))
	{
		sum *= 10;
		sum = sum + (*s - '0');
		s++;
	}
	count = sum * sign;
	return (count);
}
