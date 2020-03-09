#include "dog.h"
#include <stdlib.h>
/**
 * _str - check the code for Holberton School students.
 * @str: pointer
 * Return: Always 0.
 */
char *_str(char *str)
{
	int c = 0, s = 0;

	char *d;

	if (str == NULL)
		return (NULL);
	while (str[s] != '\0')
	{
		s++;
		c++;
	}
	c = 0;
	d = malloc(sizeof(char) * (s + 1));
	if (d == NULL)
		return (NULL);
	while (c < (s + 1))
	{
		d[c] = str[c];
		c++;
	}

	if (str == NULL)
		return (NULL);
	return (d);
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
