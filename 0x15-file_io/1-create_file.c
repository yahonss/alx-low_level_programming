#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return:on failure  - -1.
 *         if not - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fid, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fid = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fid, text_content, len);

	if (fid == -1 || wr == -1)
		return (-1);

	close(fid);

	return (1);
}


