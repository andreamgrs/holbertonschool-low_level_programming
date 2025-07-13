#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct that stores information about dog.
 *
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 *
 */
typedef struct dog
{
	const char *name;
	float age;
	const char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
