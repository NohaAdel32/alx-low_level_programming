#include"main.h"

/**
 * _puts - prints a string
 * @str: string
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str != '\0'; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
