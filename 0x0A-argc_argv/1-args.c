#include "main.h"
/**
 * main - prints the number of arguments passed into it
 * @argc: argument count to number the arguments
 * @argv: argument vector
 *
 * Return: 0.
 */
int main(int argc, char *argv)
{
	int i;

	for (i = 0; i < argc; argv++)
	{
		i++;
	}
	printf("%d\n", i - 1);

	return (0);
}
