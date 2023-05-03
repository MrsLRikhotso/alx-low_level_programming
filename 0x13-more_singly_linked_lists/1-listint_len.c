#include "lists.h"


/**
 * listint_len - It returns the number of elements in a linked lists
 * @c: The linked list of type listint_t to traverse
 *
 * Return: The number of nodes
 */

size_t listint_len(const listint_t *c)

{

	size_t cum = 0;


	while (c)

	{

		cum++;

		c = c->next;

	}


	return (cum);

}
