#include "main.h"

/**
 *print_alphabet - Prints the alphabet in lowercase, using _putchar twice, followed by a new line.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
