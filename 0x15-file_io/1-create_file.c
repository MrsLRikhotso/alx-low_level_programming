#include "main.h"


/**
 * create_file - Create file
 * @filename: Pointer name the file to create
 * @text_content: Pointer string to write file
 * Return: function fails - -1.
 * otherwise - 1.
 */

int create_file(const char *filename, char *text_content)

{

	int f, y, lens = 0;


	if (filename == NULL)

		return (-1);


	if (text_content != NULL)

	{

		for (lens = 0; text_content[lens];)

			lens++;

	}


	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	y = write(f, text_content, lens);


	if (f == -1 || y == -1)

		return (-1);


	close(f);


	return (1);

}



