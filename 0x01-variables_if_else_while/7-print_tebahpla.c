#include <stdio.h>

/**
 * main - this is a main function
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}


