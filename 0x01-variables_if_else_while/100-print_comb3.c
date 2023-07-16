#include<stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for ((j = i + 1); j <= 9; j++)
		{
			putchar(i + 48);
			putchar(j + 48);

			if (i + j != 17)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

