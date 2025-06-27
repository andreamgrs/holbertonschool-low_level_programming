#include "main.h"
/**
 * _strlen - returns the length of a string.
 *
 * @s: pointer that points to a string.
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != 0)
	{
		len = len + 1;
	}
	return (len);

}
