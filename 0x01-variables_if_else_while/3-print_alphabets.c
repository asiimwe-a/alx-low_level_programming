#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0 on success
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 96)
	{
		putchar(m);
		m++;
	}
	putchar('\n')
	return (0);
}
