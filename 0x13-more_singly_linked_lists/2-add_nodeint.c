#include "lists.h"


/**
 * add_nodeint -You adds a new node at the beginning of a linked list
 * @heazd: A pointer to the first node in the list
 * @n: The  data to insert in that new node
 * Return: A pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **heazd, const int n)

{

	listint_t *news;


	news = malloc(sizeof(listint_t));

	if (!news)

		return (NULL);


	news->n = n;

	news->next = *heazd;

	*heazd = news;


	return (news);

}



