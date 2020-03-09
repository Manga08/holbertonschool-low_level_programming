#include "dog.h"
#include <stdio.h>
/**
 * init_dog - something
 *@d: the pointer
 *@name: the name
 *@age: the age
 *@owner: the owner
 * Return: 0
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
