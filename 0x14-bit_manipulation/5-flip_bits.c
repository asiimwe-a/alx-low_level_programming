#include "main.h"

/**
* flip_bits - bits you would need to flip to get from one number to another
* @n: Number to  flip.
* @m: Number to  flip.
* Return: returns the number of bits you would need to flip.
**/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >=; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
