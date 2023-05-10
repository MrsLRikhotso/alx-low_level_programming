#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read_textfile print STDOUT
 * @filename: textfile is read
 * @letters: The number of letters is read
 * Return: a- actual number the bytes read and print
 * 0 is when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)

{

	char *buffet;

	ssize_t fed;

	ssize_t a;

	ssize_t m;


	fed = open(filename, O_RDONLY);

	if (fed == -1)

		return (0);

	buffet = malloc(sizeof(char) * letters);

	m = read(fed, buffet, letters);

	a = write(STDOUT_FILENO, buffet, m);


	free(buffet);

	close(fed);

	return (a);

}





