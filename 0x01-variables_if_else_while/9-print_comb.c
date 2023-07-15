#include<stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	char ch = '0';

	while (ch <= '8')
	{
		putchar(ch);
		putchar(',');
		putchar(' ');
		ch++;
	}

	putchar('9');
	return (0);
}
