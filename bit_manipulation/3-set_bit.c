#include "main.h"

/**
 * set_bit - Please set bit at a proposed index to 1
 * @q: The pointer of the number changes
 * @index: The index bit set to 1
 * Return: 1 for success, -1 for failure

 */

int set_bit(unsigned long int *q, unsigned int index)

{

        if (index > 63)

                return (-1);


        *q = ((1UL << index) | *q);

        return (1);

}



