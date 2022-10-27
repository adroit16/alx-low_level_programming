#include "main.h"
/**
 * get_endianness - this function checks for endianness
 * Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	int num;

	num = 1;
	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
