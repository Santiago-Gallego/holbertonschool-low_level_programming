#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: character
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}

/**
 * *_strcpy - copies string pointed to by src
 * @dest: character pointer
 * @src: character source
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}

/**
 * new_dog - create a new dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog_new;
	int namelen;
	int ownerlen;

	dog_new = malloc(sizeof(struct dog));
	if (dog_new == NULL)
		return (NULL);

	namelen = _strlen(name);
	dog_new->name = malloc(sizeof(char) * (namelen + 1));
	if (dog_new->name == NULL)
	{
		free(dog_new);
		return (NULL);
	}
	dog_new->name = _strcpy(dog_new->name, name);

	ownerlen = _strlen(owner);
	dog_new->owner = malloc(sizeof(char) * (ownerlen + 1));
	if (dog_new->owner == NULL)
	{
		free(dog_new->name);
		free(dog_new);
		return (NULL);
	}
	dog_new->owner = _strcpy(dog_new->owner, owner);
	dog_new->age = age;

	return (dog_new);
}
