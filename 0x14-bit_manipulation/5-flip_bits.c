#include "main.h"

/**
 * flip_bits - counts num of bits to change from one num to another
 * @n: i numeral
 * @m: ii number
 * Return: num of bits for change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int z, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (z = 63; z >= 0; z--)
	{
		current = exclusive >> z;
		if (current & 1)
			count++;
	}

	return (count);
}
