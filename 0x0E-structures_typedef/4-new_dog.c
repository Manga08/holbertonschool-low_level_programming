#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - something
 *@name: the name
 *@age: the age
 *@owner: the owner
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int c1 = 0, c2 = 0;
	dog_t *Newdog;

	Newdog = malloc(sizeof(dog_t));
	if (Newdog == NULL)
		return (NULL);
	while (name[c1])
		c1++;
	while (owner[c2])
		c2++;
	Newdog->name = malloc((c1 + 1) * sizeof(char));
	if (Newdog->name == NULL)
	{
		free(Newdog);
		return (NULL);
	}
	for (c1 = 0; (name[c1]); c1++)
		Newdog->name[c1] = name[c1];
	Newdog->name[c1] = '\0';
	Newdog->owner = malloc((c2 + 1) * sizeof(char));
	if (Newdog->owner == NULL)
	{
		free(Newdog->name);
		free(Newdog);
		return (NULL);
	}
	for (c1 = 0; (owner[c1]); c1++)
		Newdog->owner[c1] = owner[c1];
	Newdog->owner[c1] = '\0';
	Newdog->age = age;
	return (Newdog);
}
