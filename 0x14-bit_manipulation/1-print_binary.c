#include "main.h"
#include <stdio.h>
/**
* print_binary - ther is no signed int to the list
* @n: no sign in to int
* Return: Always (zero)
*/
void print_binary(unsigned long int n)
{

	unsigned long int n_copy = n, bak = 1;
	int mode = 0;

	while (n_copy > 0)
	{
		mode++;
		n_copy >>= 1;
	}
	mode -= 1;

	if (mode > 0) /* create bak based on length of num */
		bak = bak << mode;

	while (bak > 0) /* match each rightmost bit to see if 1 or 0 */
	{
		if (n & bak)
			_putchar('1');
		else
			_putchar('0');

		bak >>= 1;
	}
}
