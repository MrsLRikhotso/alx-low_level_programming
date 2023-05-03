#include "lists.h"


/**
 * sum_listint - It calculates the sum of all the data in a listint_t list
 * @head: The first node in the linked list
 *
 * Return: resulting sum
 */

int sum_listint(listint_t *head)

{

	int sum = 0;

	listint_t *tempy = head;

	while (tempy)

	{

		sum += tempy->n;

		tempy = tempy->next;

	}


	return (sum);

}
