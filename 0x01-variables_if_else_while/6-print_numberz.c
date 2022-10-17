#include <stdio.h>

/**
  * main - Prints single digit numbers
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char c = '0';
	int n;

	while (c <= '9')
	{
		n = c;
		putchar(n);
		c++;
	}

	putchar('\n');

	return (0);
}
