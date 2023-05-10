#include "main.h"
#include <stdio.h>
#include <stdlib.h>


char *create_buf(char *file);

void close_file(int fd);


/**
 * create_buffer - Allocates 1024 bytes for buffer.
 * @file: name file buffer is storing chars for.
 *
 * Return: Pointer newly-allocated buffer.
 */

char *create_buf(char *file)

{

	char *buf;


	buf = malloc(sizeof(char) * 1024);


	if (buf == NULL)

	{

		dprintf(STDERR_FILENO,

				"Error: Can't write to %s\n", file);

		exit(99);

	}


	return (buf);

}


/**
 * close_file - close file descriptors.
 * @fd: The file descriptor to be closed.
 */

void close_file(int fd)

{

	int cv;


	cv = close(fd);


	if (cv == -1)

	{

		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);

		exit(100);

	}

}


/**
 * main - Copies contents of file to another file.
 * @argc: number of arguments supplied to program.
 * @argv: array of pointers arguments
 * Return: 0 on success.
 * Description: argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot create or write to - exit code 99.
 * If file_to or file_ cannot close - exit code 100.
 */

int main(int argc, char *argv[])

{

	int fro, two, ri, w;

	char *buffet;


	if (argc != 3)

	{

		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");

		exit(97);

	}


	buffet = create_buffet(argv[2]);

	fro = open(argv[1], O_RDONLY);

	ri = read(fro, buffet, 1024);

	two = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);


	do {

		if (fro == -1 || ri == -1)

		{

			dprintf(STDERR_FILENO,

					"Error: Can't read from file %s\n", argv[1]);

			free(buffet);

			exit(98);

		}


		w = write(two, buffet, ri);

		if (two == -1 || w == -1)

		{

			dprintf(STDERR_FILENO,

					"Error: Can't write to %s\n", argv[2]);

			free(buffet);

			exit(99);

		}


		ri = read(fro, buffet, 1024);

		two = open(argv[2], O_WRONLY | O_APPEND);


	} while (ri > 0);


	free(buffet);

	close_file(fro);

	close_file(two);


	return (0);

}

