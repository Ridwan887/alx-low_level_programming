#include "main.h"
/**
 * positive_or_negative - Determine if number is positive, negative or zero.
 * @i : is the number to be checked
 * Return: 0 (Success)
*/
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if  (i < 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
return;
}
