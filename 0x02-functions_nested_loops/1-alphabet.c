#include "main.h"

/**
 * print_alphabet - Make the alphabet a - z
 * Return: void
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

}
