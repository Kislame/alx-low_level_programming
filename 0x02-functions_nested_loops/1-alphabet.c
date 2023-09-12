#include "main.h"

/**
 *print_alphabet function implmentation using putchar
 * 
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
