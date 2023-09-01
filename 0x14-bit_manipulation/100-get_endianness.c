#include "main.h"

/**
 * get_endianness - retunrs the endian of the processor
 *
 * Return: 1 for little and 0 for big
 */

int get_endianness(void)
{
	int x;
	char *y;

	y = (char *)&x;
	return (*y + 48);
}
