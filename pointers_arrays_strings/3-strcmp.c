#include "main.h"
/**
 * _strcmp -  compares two strings.
 *
 * @s1: pointer to the first string.
 * @src: pointer to the second string.
 *
 * Return: int value can be 0 - or +.
 */
int _strcmp(char *s1, char *s2)
{
	int cont;
	int result = 0;
	int diff_find = 0;

	cont = 0;
	while (s1[cont] != '\0' && s2[cont] != '\0' && diff_find == 0)
	{
		if (s1[cont] != s2[cont])
		{
			result = s1[cont] - s2[cont];
			diff_find = 1;
		}
		else
		{
			result = 0;
		}
	cont = cont + 1;
	}
	return (result);
}
