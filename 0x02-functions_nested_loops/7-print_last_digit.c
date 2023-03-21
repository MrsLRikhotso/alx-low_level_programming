#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a number.
 *
 * @n: Parameter, input number as an integer.
 *
 * Return: k;
 */
int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	_putchar(k + '0')
	return (k);
}
