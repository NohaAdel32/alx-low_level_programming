#include<stdio.h>
#include "3-calc.h"
/**
 * op_add - Addition
 * @a: first num
 * @b: second num
 * Return: add 2 num
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substraction
 * @a: first num
 * @b: second num
 * Return: sub 2 num
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication
 * @a: first num
 * @b: second num
 * Return: mul 2 num
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division
 * @a: first num
 * @b: second num
 * Return: div 2 num
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - The remainder of the division
 * @a: first num
 * @b: second num
 * Return: mod
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
