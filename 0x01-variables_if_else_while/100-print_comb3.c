#include <stdio.h>
/**
 * main - main block
 * print possible combination of 2 digits
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	i = 0;

	while (i < 100)
	{
		j = i % 10; /* single digit */
		k = i / 10; /* double digit */

		if (k < j)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');

	return (0);

}
