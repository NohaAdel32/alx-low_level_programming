#include"main.h"

/**
 * more_numbers - prints 10 times the numbers
 * Return: 0
 */

void more_numbers(void)
{
	int i, j, num;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			num = j % 10;

			if (j > 9)
			{
				_putchar((j / 10) + 48);
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
