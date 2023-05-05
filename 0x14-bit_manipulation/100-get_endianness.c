#include "main.h"

/**
 * get_endianness - It checks machine if it is little or big endian
 * Return: 0 when big, 1 when little
 */

int get_endianness(void)

{

	unsigned int r = 1;

	char *o = (char *) &r;


	return (*o);

}



