#include "lists.h"


/**
 * reverse_listint - reverse linked list
 * @head: pointer first node in the list
 * Return:the pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)

{

	listint_t *first = NULL;

	listint_t *next = NULL;


	while (*head)

	{

		next = (*head)->next;

		(*head)->next = first;

		first = *head;
		
		*head = next;

	}


	*head = first;


	return (*head);

}
