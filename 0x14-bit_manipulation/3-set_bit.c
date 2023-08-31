#include "main.h"
/**
* set_bit - insert bit to 1 given int
* @n: binary number
* @index: insert new binary number
* Return: if success return (1) or, if error return (-1)
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bits;
	unsigned long int mask = 1;

	/* validate index is not out of range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	/* create mask with 1 at index (...00100...) to work on that index */
	mask <<= index;
	*n = (*n | mask);

	return (1);
}
