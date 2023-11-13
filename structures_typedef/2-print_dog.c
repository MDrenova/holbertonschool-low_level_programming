#include <stddef.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function to initialize struct
 * @d: struct name
 * printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)")
 */

void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
