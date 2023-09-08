#include <stdio.h>

/**
 *main - Entry point of the program
 *
 *Description: Prints the lowercase alphabet in reverse, followed by a new line,
 *             using only the putchar function twice.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
