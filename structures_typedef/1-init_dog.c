#include <stddef.h>
#include "dog.h"

/**
 * init_dog - function to initialize struct
 * @d: struct name
 * @name: name of dog
 * @age: age dog
 * @owner: owner of dog
 *
 */

void  init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
