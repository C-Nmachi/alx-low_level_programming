#include <stdio.h>
/**
 * main - main block
 * Description: use alphabets in lowercase and then uppercase using putchar
 * Return: 0
 */
int main(void)
{
	char c = "a";

	while (c <= "z")
	{
		putchar(c);
		c++;

	}

	c = "A";

	while (c <= "Z")
	{
		putchar("\n");
		c++;
	}
	return (0);
}
