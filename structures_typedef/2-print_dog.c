#include <stddef.h>
#include "dog.h"

/**
 * print_dog - function to initialize struct
 * @d: struct name
 */

void print_dog(struct dog *d)
{
	if(d != 0)
	{
		if(d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if(d->age == 1E-15)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		if(d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
    }
}
