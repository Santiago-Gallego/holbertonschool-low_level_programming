#include "dog.h"
#include <stdlib.h>
char *_strdup(char *str);
/**
 * new_dog - creates a new dog
 * @name: variable pointing to name of dog
 * @age: age of dog
 * @owner: variable pointing to dog owner
 *
 * Return: variable pointing to dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *s1;
	char *s2;
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	s1 = _str(name);
	if (s1 == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	s2 = _str(owner);
	if (s2 == NULL)
	{
		free(s1);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = s1;
        new_dog->owner = s2;
        new_dog->age = age;
	return (new_dog);
}
/**
 * _strdup - returns a pointer to dup string, new allocated memory
* @str: string to copy
*
* Return: pointer to new string or NULL
*/
char *_str(char *str)
{
	char *str_2;
	unsigned int i, j;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (*(str + j) != '\0')
	{
		len++;
		j++;
	}
	str_2 = malloc((len + 1) * sizeof(char));
	if (str_2 == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(str_2 + i) = *(str + i);
		i++;
	}
	*(str_2 + len) = '\0';
	return (str_2);
}
