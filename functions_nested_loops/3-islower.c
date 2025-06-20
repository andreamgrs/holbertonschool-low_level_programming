#include "main.h"
/**
 * _islower - return 1 if the letter is lowercase.
 *
 *
 * Return 0 if c is not lowercase.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
