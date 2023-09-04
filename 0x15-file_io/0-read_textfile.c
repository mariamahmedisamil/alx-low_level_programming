#include "main.h"
/**
* read_textfile - Reading text from the new file and print
* @filename: Named the file to read and print
* @letters: numbers of the of the new file bytes to read
*
* Return: numbers of bytes read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int id;
	ssize_t sumt;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	id = open(filename, O_RDONLY);
	if (id == -1)
		return (0);
	sumt = read(id, &buf[0], letters);
	sumt = write(STDOUT_FILENO, &buf[0], sumt);
	close(id);
	return (sumt);
}
