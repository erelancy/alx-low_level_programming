#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads written file print to STDOUT.
 * @filename: writtenfile read
 * @letters: number of letters to be read
 * Return: s- actual num of bytes
 *0 when function fails/null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t s;
	ssize_t g;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	g = read(fd, buf, letters);
	s = write(STDOUT_FILENO, buf, g);

	free(buf);
	close(fd);
	return (s);
}
