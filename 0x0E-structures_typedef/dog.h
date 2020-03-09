#ifndef my_dog_h
#define my_dog_h
#include <stdio.h>
int _putchar(char c);
/**
 * struct dog - check the code for Holberton School students
 *@name: the name
 *@age: the age
 *@owner: the owner
 */
struct dog
{
		char *name;
		float age;
		char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
