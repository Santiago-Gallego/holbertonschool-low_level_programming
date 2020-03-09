#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - entry point
 * @name: string from main, name of pet
 * @age: number from main, age of pet
 * @owner: string from main, owner of pet
 * Return: p
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	if (name == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	if (owner == NULL)
		return (NULL);
	new_dog->owner = owner;
	return (new_dog);
}
