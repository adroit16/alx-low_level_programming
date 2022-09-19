#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first value
 * @b: pointer to second value
 * Return: Intergers
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
