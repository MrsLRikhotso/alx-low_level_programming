#include "main.h"

/**
 * print_diagonal - draws a diagonal line the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal (int n)
{
	if (n <= 0)
	{
		_putchar('\n');

