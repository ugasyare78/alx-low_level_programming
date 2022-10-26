include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char a;

	while (a = 'a' && a <= 'z')
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');
}
