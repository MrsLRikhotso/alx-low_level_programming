#include <stdlib.h>
#include "lists.h"


/**
 * list_len - returns the number of elements in a linked list
 * @s: pointer to the list_t list
 *
 * Return: number of elements in s
 */

size_t list_len(const list_t *s)

{

 size_t e = 0;


 while (s)

 {

 e++;

 s = s->next;

 }

 return (e);

}
