#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to the Psix STDOUT.
 * @filename: text file being read
 * @letters: number of letters it should read and print
 * Return: wr- fails or does not write the expected amount of bytes
 * filename is NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufr;
	ssize_t fid;
	ssize_t wr;
	ssize_t t;

	fid = open(filename, O_RDONLY);
	if (fid == -1)
		return (0);
	bufr = malloc(sizeof(char) * letters);
	t = read(fid, bufr, letters);
	wr = write(STDOUT_FILENO, bufr, t);

	free(bufr);
	close(fid);
	return (wr);
}

