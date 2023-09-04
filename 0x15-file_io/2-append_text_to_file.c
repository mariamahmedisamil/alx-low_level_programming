#include "main.h"
/**
* append_text_to_file - Appends text to the new file
* @filename: point and name the file and print
* @text_content: add end to the line
*
* Return: always (1)
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int r, d, tem = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (tem = 0; text_content[tem];)
			tem++;
	}

	r = open(filename, O_WRONLY | O_APPEND);
	d = write(r, text_content, tem);

	if (r == -1 || d == -1)
		return (-1);

	close(r);

	return (1);
}
