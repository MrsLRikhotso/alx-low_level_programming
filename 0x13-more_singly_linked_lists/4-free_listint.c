#include "lists.h"


/**
 * free_listint - It frees a linked list
 * @head: listint_t list be freed
 */

void free_listint(listint_t *head)

{

	listint_t *tempi;


	while (head)

	{

		tempi = head->next;

		free(head);

		head = tempi;

	}

}
