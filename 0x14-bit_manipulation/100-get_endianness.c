#include "main.h"

/**
 * get_endianness - check if electronic is small or large endian
 * Return: 0 for large, 1 for small
 *
 */
int get_endianness(void)
{
	unsigned int z = 1;
	char *c = (char *) &z;

	return (*c);
}
