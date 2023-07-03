#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main
 * function is executed
 */
void first(void)
{
	printf("to be a man is not a day job, so keep moving,\n");
	printf("I love being a senior developer!\n");
}
