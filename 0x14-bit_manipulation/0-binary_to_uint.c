#include "main.h"
/**
* _stoi - list new file name it int
* @c: take the int
* Return: convert to be int
*/
unsigned int _stoi(char c)
{
	return ((unsigned int) c - '0');
}
/**
* _strlen - do calculating to string list
* @s: to the input
* Return: to string list
*/
unsigned int _strlen(const char *s)
{
	unsigned int a;

	for (a = 0; s[a]; a++)
		;
	return (a);
}
/**
* binary_to_uint - converting the whole numbers to int
* @b: convert to string
* Return: unsigned string codes
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int mod, new, exo;

	if (!b)
		return (0);
	mod = new = 0;
	exo = 1;
	for (i = _strlen(b) - 1; b[i]; i--, exo *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		new = _stoi(b[i]);
		mod += new * exo;
	}
	return (mod);
}
