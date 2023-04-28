#include <stdio.h>


void thefirst(void) __attribute__ ((constructor));


/**
 * thefirst - prints a sentence before the main
 * function is executed
 */

void thefirst(void)

{

 printf("You're beat! and yet, you must allow,\n");

 printf("I bore my house upon my back!\n");

}
