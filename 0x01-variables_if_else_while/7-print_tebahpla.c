#include<stdio.h>
/**
 * main - printing the digit from back
 *
 * Return: 0
 */
int main(void)
{
	char i = 'z';
		for (i = 'z' ; i >= 'a' ; i--)
			putchar(i);
	putchar('\n');
	return (0);
}
