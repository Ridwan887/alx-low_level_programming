#include "main.h"

/**
 * _isupper - checks if uppercase
 * @c: value to be checked
 * Return: Always 0.
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
