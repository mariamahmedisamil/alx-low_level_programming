#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - print this line into the main
 * function is executed
 * Return: Empty
 */
void first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
