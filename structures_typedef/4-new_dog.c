#include "dog.h"
#include <stdlib.h>
/**
 * dog_t *new_dog - function that creates a new dog.
 *
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog
 *
 * Return: pointer to a new dog_t.
 */
/**
 * copy_string - function that copy a string to a new space in mem.
 *
 * @str: string to be copy.
 *
 * Return: pointer to a newly
 * allocated space in memory, which contains a copy of the string
 * given as a parameter.
 */
char *copy_string(char *str)
{
	char *p;
	int cont;
	int cont2;

	if (str == NULL)
	{
		return (NULL);
	}

	cont = 0;
	while (str[cont] != '\0')
	{
		cont = cont + 1;
	}
	p = malloc((cont + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (cont2 = 0; cont2 < (cont + 1); cont2++)
		{
			p[cont2] = str[cont2];
		}
	}
	return (p);
}
dog_t *new_dog(char *name, float age, char *owner)
{
	char *copy_name, *copy_owner;
	dog_t *d;

	copy_name = copy_string(name);
	if (copy_name == NULL)
	{
		return (NULL);
	}

	copy_owner = copy_string(owner);
	if (copy_owner == NULL)
	{
		free(copy_name);
		return (NULL);
	}

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(copy_name);
		free(copy_owner);
		return (NULL);
	}
	d->name = copy_name;
	d->age = age;
	d->owner = copy_owner;

	return (d);
}
