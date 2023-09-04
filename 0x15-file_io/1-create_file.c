#include "main.h"
/**
* _strlen - add the new line have stright lenthg
* @s: the lenth of line byete
*
* Return: always (0)
*/
int _strlen(char *s)
{
	int r = 0;

	if (!a)
		return (0);

	while (*a++)
		r++;
	return (r);
}
/**
* create_file - Add new files
* @filename: add name to the new file
* @text_content: add some text to be readen
*
* Return: 1 if it success, 0 if it errored
*/
int create_file(const char *filename, char *text_content)
{
	int id;
	ssize_t sumt = 0, temp = _strlen(text_content);

	if (!filename)
		return (-1);
	id = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (id == -1)
		return (-1);
	if (temp)
		sumt = write(id, text_content, temp);
	close(id);
	return (sumt == temp ? 1 : -1);
}
