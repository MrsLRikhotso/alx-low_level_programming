#include "lists.h"


/**
 * free_listint_safe - freed a linked list
 * @z: pointer to the first node in the linked list
 * Return: the number of elements in the freed list
 */

size_t free_listint_safe(listint_t **z)

{

        size_t len = 0;

        int dill;

        listint_t *temp;


        if (!z || !*z)

                return (0);


        while (*z)

        {

                dill = *z - (*z)->next;

                if (dill > 0)

                {

                        temp = (*z)->next;

                        free(*z);

                        *z = temp;

                        len++;

                }

                else

                {

                        free(*z);

                        *z = NULL;

                        len++;

                        break;

                }

        }


        *z = NULL;


        return (len);

}



