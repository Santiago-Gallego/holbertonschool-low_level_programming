#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - create a dog structure
 * @d: name of struct
 * @name: name of dog
 * @age: age of dog
 * @owner: ownder of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
