#include "lists.h"


/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @ix: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int ix, int n)

{

        unsigned int o;

        listint_t *new;

        listint_t *temlp = *head;


        new = malloc(sizeof(listint_t));

        if (!new || !head)

                return (NULL);


        new->n = n;

        new->next = NULL;


        if (ix == 0)

        {

                new->next = *head;

                *head = new;

                return (new);

        }


        for (o = 0; temlp && o < ix; i++)

        {

                if (o == ix - 1)

                {

                        new->next = temlp->next;

                        temlp->next = new;

                        return (new);

                }

                else

                        temlp = temlp->next;

        }


        return (NULL);

}



