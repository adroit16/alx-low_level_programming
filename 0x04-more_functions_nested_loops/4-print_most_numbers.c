#include "main.h"

/**
 * prints_most_numbers - prints number
 */

void print_most_number(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}