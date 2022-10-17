#include <stdio.h>

/**
  * main - prints alphabets in lowercase
*Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'Z';

	/*a while loop to print the alphabets*/
	while (c <= 'Z')
	{
		putchar(c);

		--c; }
	putchar('\n');

	return (0);
}
