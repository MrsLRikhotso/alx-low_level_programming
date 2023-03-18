#include <stdio.h>
/**
  *main - Entry point
  *Description: 'prints all single digit numbers of base 10 starting from 0'
  *Return: always 0
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar("%d", n);

	}
	printf("\n");
	return (0);
}
