#include <stdio.h>

/**
  * main - Prints lowercase alphabets except e and q
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l != 'q')
		{
			if (l != 'e')
			{
				putchar(l);
			}
		}
		++l;
	}

	putchar('\n');

	return (0);
}
