#include<stdio.h>

/**
 * main - Entry point
 * Description: print number using by putchar function
 * Return: 0 (success)
 */
int main(void)
{
	int digit = 48;

	while (digit <= 57)
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
