#include "main.h"

/**
 * _isdigit - checks whether c is a digit or not
 * @c: represents digits
 * Return: 1 for numbers (0 to 9) and 0 in other cases:
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
