#include <stdio.h>

/**
  * main - prints alphabets in lowercase
*Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'a';

	/*a while loop to print the alphabets*/
	while (c <= 'z')
	{
		putchar(c);

		++c;
	}
	
	putchar('\n');
	return (0);

}
