#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void close_file(int fdval);
char *create_buffer(char *file);

/**
 * create_buffer - Allocates 1,024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
        char *buffer;

        buffer = malloc(sizeof(char) * 1024);

        if (buffer == NULL)
        {
                dprintf(STDERR_FILENO,
                        "Error: Can't write to %s\n", file);
                exit(99);
        }

        return (buffer);
}

/**
 * close_file - Closes the files
 * @fdval: The file that will be closed.
 */
void close_file(int fdval)
{
        int cls;

        cls = close(fdval);

        if (cls == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fdval %d\n", fdval);
                exit(100);
        }
}


