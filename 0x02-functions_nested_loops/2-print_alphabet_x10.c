#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets ten times
 *
 * Returns: Always 0:
 */

void print_alphabet_x10(void)
{
	char alpha;
	int i;

	i = 0;

	for (i = 0; i < 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

		_putchar('\n');
	}

}
