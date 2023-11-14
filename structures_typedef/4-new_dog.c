#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - function to initialize struct
 * @name: string for the name of dog
 * @age: age of dog float
 * @owner: string owner
 * mund ta besh edhe strdup dhe pa malloc
 * Return: return struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new = malloc(sizeof(dog_t));
	char *new_name = malloc(strlen(name) + 1);
	char *new_owner = malloc(strlen(owner) + 1);

	if (dog_new == NULL || new_name == NULL || sec_owner == NULL)
	{
		free(dog_new);
		free(new_name);
		free(new_owner);
		return (NULL);
	}

	strcpy(new_name, name);
	strcpy(new_owner, owner);

	dog_new->name = name;
	dog_new->age = age;
	dog_new->owner = owner;

	return (dog_new);
}
