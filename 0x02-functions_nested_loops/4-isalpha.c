#include "main.h"

/**
 * _isalpha - Check Main
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
	char big, small;

	int letter = 0;

	for (small = 'a'; small <= 'z'; small++)
	{
		for (big = 'A'; big <= 'Z'; big++)
		{
			if (c == small || c == big)
				letter = 1;
		}
	}
	return (letter);
}
