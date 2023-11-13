#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - function to initialize struct
 * @name: string for the name of dog
 * @age: age of dog float
 * @owner: string owner
 * Return: struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new;

	dog_new = malloc(sizeof(dog_t));

	if (dog_new == NULL)
		return (NULL);

	dog_new->name = name;
	dog_new->age = age;
	dog_new->owner = owner;

	return (dog_new);
}
