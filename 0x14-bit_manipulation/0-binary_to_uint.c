#include "main.h"

/**
 * binary_to_uint - converts binary numeral to unsigned int.
 * @b: string containing  binary numerals
 * Return: converted numerals
 */
unsigned int binary_to_uint(const char *b)
{
	int z;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (z = 0; b[z]; z++)
	{
		if (b[z] < '0' || b[z] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[z] - '0');
	}

	return (dec_val);
}
