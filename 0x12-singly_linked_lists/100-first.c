#include <stdio.h>
#include "lists.h"

void print(void) __attribute__((constructor));
/**
 * print - function with constructor
 *
 * Description: print string
 * Return: na
 */
void print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}