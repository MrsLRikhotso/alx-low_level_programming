#include "main.h"

/**
 * clear_bit - Should set value of given bit to 0
 * @w: The pointer number to change
 * @index: The index bit to clear
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *w, unsigned int index)

{
	if (index > 63)

		return (-1);


	*w = (~(1UL << index) & *w);

	return (1);

}
