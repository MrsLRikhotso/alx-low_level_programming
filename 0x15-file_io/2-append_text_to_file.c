#include "main.h"


/**
 * append_text_to_file - Append the text at end of file
 * @filename: Pointer name of file
 * @text_content: String add at end of file
 * Return: Function fails or filename is NULL - -1.
 * If file does not exist user lack write permissions - -1.
 * otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)

{

	int oo, we, lenz = 0;


	if (filename == NULL)

		return (-1);


	if (text_content != NULL)

	{

		for (lenz = 0; text_content[lenz];)

			lenz++;

	}


	oo = open(filename, O_WRONLY | O_APPEND);

	we = write(oo, text_content, lenz);


	if (oo == -1 || we == -1)

		return (-1);


	close(oo);


	return (1);

}




