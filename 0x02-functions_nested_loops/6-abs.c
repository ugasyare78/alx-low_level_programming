#include "main.h"

/**
 * _abs - returns the absolute  value of a an integer
 * @c: integer assignment
 *Return: Always 0.
 */

int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
