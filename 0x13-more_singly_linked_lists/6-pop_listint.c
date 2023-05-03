#include "lists.h"


/**
 * pop_listint -It deletes the head node of a linked list
 * @head: The pointer to the first element in the linked list
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)

{

	listint_t *tempe;

	int numb;

	if (!head || !*head)

		return (0);


	numb = (*head)->n;

	tempe = (*head)->next;

	free(*head);

	*head = tempe;

	return (numb);

}


