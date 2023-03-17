#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determination if a random number is positive, negative or zero.
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is positive\n", n, "positive");
		else if (n < 0)
			printf("%d is negative\n", n, "negative");
		else
			printf("%d is zero\n", n, "zero");
		return (0);
}
