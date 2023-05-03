#include "lists.h"


/**
 * Print_listint -make it print all the elements of a linked list
 * @m: linked list of type listint_t to print
 * Return: It must number of nodes
 */

size_t print_listint(const listint_t *m)

{

        size_t bum = 0;


        while (m)

        {

                printf("%d\n", m->n);

                bum++;

                m = m->next;

        }


        return (bum);

}






