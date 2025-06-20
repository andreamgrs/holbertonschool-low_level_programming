#include "main.h"
/**
 * _isalpha - check is char passed is a letter, lowercase or uppercase.
 *
 * @c: the character to evaluate.
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
