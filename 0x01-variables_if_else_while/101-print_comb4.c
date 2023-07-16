#include<stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */

int main(void)
{
	int i, j, n;

	for (i = 0; i <= 7; i++)
	{
		for ((j = i + 1); j <= 8; j++)
		{
			for ((n = j + 1); n <= 9; n++)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(n + 48);

				if (i + j + n != 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
