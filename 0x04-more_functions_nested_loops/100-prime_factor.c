#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * Main - Entry point
 *
 * prints_number - print largest prime factor of the number
 * follwed by a new line
 *@sqrt: square root of largest prime
 * Return: Always 0 (success)
 */
int main(void)
{
	long int n;
	long int max;
	long int i;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n = 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n/ i;
		}
	}

	if (n > 2)
		max = n;
	printf("%ld\n", max);

	return (0);

}
