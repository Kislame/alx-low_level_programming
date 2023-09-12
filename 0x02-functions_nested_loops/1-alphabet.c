#include "main.h"

/**
 *print_alphabet function
 *using putchar twice
 *followed by a new line
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
