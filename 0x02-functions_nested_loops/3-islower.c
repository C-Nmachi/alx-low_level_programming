#include "main.h"

/**
 * _islower - Short description, single line
 * @c: contains value to be compared
 *  Description: it uses putchar to print lowercase 10x
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	char o;

	int n = 0;


	for (o = 'a'; o <= 'z'; o++)
	{
		if (o == c)
			n = 1;
	}

	return (n);
}
