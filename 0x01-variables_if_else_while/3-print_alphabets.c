#include <stdio.h>

/**
  *main - Prints lower and uppercase alphabet
  *
  *Return: Always 0 (Success)
 */

int main(void)
{
	char l = 'a';
	char u = 'A';

	while (l <= 'z')
	{
		putchar(l), ++l;
	}
	while (u <= 'Z')
	{
		putchar(u), ++u;
	}

	putchar('\n');

	return (0);
}
