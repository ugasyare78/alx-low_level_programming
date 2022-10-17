#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- it assigns a radom number to the variable n each time it is excuted.
 *
 * this program prints the last digit stored in the variable n
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n, *a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	a = &n % 10;

	/*Is the last digit greater than 5 */

	if (a > 5)
	{
		printf("Last digit of %d and is greater than 5", a);
	} else if (a < 6)
	{
		printf("Last digit of %d and is less than 6 and not 0", a);
	} else
	{
		printf("Last digit of %d and is 0", a);

	}
	return (0);
}
