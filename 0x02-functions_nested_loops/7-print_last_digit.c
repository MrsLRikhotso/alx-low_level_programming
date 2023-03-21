#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a number.
 *
 * @n: Parameter, input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		l = n % 10;
		if (n < 0)
			l = -l;
	}	return (l);
}
