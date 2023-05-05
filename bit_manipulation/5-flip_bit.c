#include "main.h"

/**
 * flip_bits - counts the number of bits to change from one number to another
 * @n: It is first number
 * @m: It is the second number
 * Return: The number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{

	int v, count = 0;

	unsigned long int currency;

	unsigned long int exclusive = n ^ m;


	for (v = 63; v >= 0; v--)

	{

		currency = exclusive >> v;

		if (currency & 1)

			count++;

	}


	return (count);

}
