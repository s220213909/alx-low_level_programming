#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedir;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	filedir = open(filename, O_WRONLY | O_APPEND);

	if (filedir == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(filedir, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(filedir);

	return (1);
}
