#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedir;
	ssize_t reader, writer;
	char *buf;

	if (!filename)
		return (0);

	filedir = open(filename, O_RDONLY);

	if (filedir == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	reader = read(filedir, buf, letters);
	writer = write(STDOUT_FILENO, buf, reader);

	close(filedir);

	free(buf);

	return (writer);
}
