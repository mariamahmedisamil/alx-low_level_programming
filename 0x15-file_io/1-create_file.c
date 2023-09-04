#include "main.h"
/**
* _strlen - add the new line have stright lenthg
* @s: the lenth of line byete
*
* Return: always (0)
*/
int _strlen(char *s)
{
	int c = 0;

	if (!s)
		return (0);

	while (*s++)
		c++;
	return (c);
}
/**
* create_file - Add new files
* @filename: add name to the new file
* @text_content: add some text to be readn
*
* Return: 1 if it success 0 if it errored
*/
int create_file(const char *filename, char *text_content)
{
	int id;
	ssize_t sumt = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	id = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (id == -1)
		return (-1);
	if (len)
		sumt = write(fd, text_content, len);
	close(id);
	return (sumt == len ? 1 : -1);
}
