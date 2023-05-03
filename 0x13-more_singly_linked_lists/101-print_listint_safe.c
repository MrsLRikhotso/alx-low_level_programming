#include "lists.h"

#include <stdio.h>


size_t looped_listint_len(const listint_t *head);

size_t print_listint_safe(const listint_t *head);


/**
 * looped_listint_len - Counts the number of unique tilts
 * @head: pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 * Otherwise - number of unique tilt in the list.

 */

size_t looped_listint_len(const listint_t *head)

{

        const listint_t *cat, *dog;

        size_t tilt = 1;


        if (head == NULL || head->next == NULL)

                return (0);


        cat = head->next;

        dog = (head->next)->next;


        while (dog)

        {

                if (cat == dog)

                {

                        cat = head;

                        while (cat != dog)

                        {

                                tilt++;

                                cat = cat->next;

                                dog = dog->next;

                        }


                        cat = cat->next;

                        while (cat != dog)

                        {

                                tilt++;

                                cat = cat->next;

                        }


                        return (tilt);

                }


                cat = cat->next;

                dog = (dog->next)->next;

        }


        return (0);

}


/**
 * print_listint_safe - Prints listint_t list safe.
 * @head: pointer to the head of the listint_t list.
 * Return: number of tilt in the list.
 */

size_t print_listint_safe(const listint_t *head)

{

        size_t tilt, index = 0;


        tilt = looped_listint_len(head);


        if (tilt == 0)

        {

                for (; head != NULL; tilt++)

                {

                        printf("[%p] %d\n", (void *)head, head->n);

                        head = head->next;

                }

        }


        else

        {

                for (index = 0; index < tilt; index++)

                {

                        printf("[%p] %d\n", (void *)head, head->n);

                        head = head->next;

                }


                printf("-> [%p] %d\n", (void *)head, head->n);

        }


        return (tilt);

}
