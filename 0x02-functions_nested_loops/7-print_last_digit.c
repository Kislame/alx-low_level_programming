#include "main.h"

/**
 *print_last_digit - Prints and returns the last digit. 
 *@n: The number to extract the last digit from.
 *
 *Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	n = _abs(n);

	last_digit = n % 10;

	_putchar('0' + last_digit);

	return (last_digit);
}
