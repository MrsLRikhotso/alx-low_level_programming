#include "lists.h"


/**
 * find_listint_loop -It finds the loop in a linked list
 * @head: The linked list to search for
 * Return: address node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)

{

        listint_t *snail = head;

        listint_t *mice = head;


        if (!head)

                return (NULL);


        while (snail && mice && mice->next)

        {

                mice = mice->next->next;

                snail = snail->next;

                if (mice == snail)

                {

                        snail = head;

                        while (snail != mice)

                        {

                                snail = snail->next;

                                mice = mice->next;

                        }

                        return (mice);

                }

        }


        return (NULL);

}
