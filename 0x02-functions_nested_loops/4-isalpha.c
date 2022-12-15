#include "main.h"
<<<<<<< HEAD

=======
>>>>>>> 316c2c786d3aa06be1c9477e9ec5e84babf0a9c6
/**
 * _isalpha - Check Main
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
<<<<<<< HEAD
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
=======
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
>>>>>>> 316c2c786d3aa06be1c9477e9ec5e84babf0a9c6
}
