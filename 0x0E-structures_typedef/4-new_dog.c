#include "dog.h"
#include <stdlib.h>
/**
 * _str - check the code for Holberton School students.
 * @s: pointer
 * Return: Always 0.
 */
char *_str(char *s)
{
	int i = 0, j = 0;

	char *cpy;

	if (s == NULL)
		return (NULL);
	while (s[j] != '\0')
	{
		j++;
		i++;
	}
	i = 0;
	cpy = malloc(sizeof(char) * (j + 1));
	if (cpy == NULL)
		return (NULL);
	while (i < (j + 1))
	{
		cpy[i] = s[i];
		i++;
	}

	if (s == NULL)
		return (NULL);
	return (cpy);
}
/**
 * new_dog - Initilize the values of variables to new dog
 * @name: poiinter to the name of dog
 * @age: age of the dog
 * @owner: pointer to dog's owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *s1, *s2;

	s1 = _str(owner);
	s2 = _str(name);
	if (s1 == NULL || s2 == NULL)
	{
		free(s1);
		free(s2);
		return (NULL);
	}
	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		free(s1);
		free(s2);
		return (NULL);
	}

	new_dog->name = s2;
	new_dog->age = age;
	new_dog->owner = s1;
	return (new_dog);
}
