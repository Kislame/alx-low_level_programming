#include <stdio.h>

/**
 *main - Entry point of the program
 *
 *Description: Prints single-digit numbers from 0 to 9 on a single line.
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}

	printf("\n");

	return (0);
}
