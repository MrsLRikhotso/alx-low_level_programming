#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @c: the desired value
 * @r: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char c, unsigned int r)

{

	int i = 0;


	for (; r > 0; i++)

	{

		s[i] = c;

		r--;

	}

	return (s);

}
