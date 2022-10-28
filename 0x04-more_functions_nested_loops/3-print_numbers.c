#include "main.h"

/**
 * print_numbers - prints numbers from 0-9
 * @ch: input number
 * Return: Always 0.
 */

void print_numbers(void)
{
	char  ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
