#include<stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	int digit = 48;
	char ch = 'a';

	while (digit <= 57)
	{
		putchar(digit);
		digit++;
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
