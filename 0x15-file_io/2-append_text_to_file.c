#include "main.h"

/**
 * append_text_to_file - Appends text at end file.
 * @filename: points to name of file.
 * @text_content: string to add toend of the file.
 * Return: If function fails or filename is NULL then -1.
 * 
 *If file does't exist then user does lack write permissions so is -1 if not then 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, s, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	s = write(o, text_content, len);

	if (o == -1 || s == -1)
		return (-1);

	close(o);

	return (1);
}
