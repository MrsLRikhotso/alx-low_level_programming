#include <stdio.h>
#include "lists.h"


/**
 * print_list - prints all the elements of a linked list
 * @l: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *l)

{

	size_t e = 0;


 while (l)

 {

	 if (!l->str)

	 printf("[0] (nil)\n");

 else

	 printf("[%u] %s\n", l->len, l->str);

 l = l->next;

 e++;

 }


 return (e);

}
