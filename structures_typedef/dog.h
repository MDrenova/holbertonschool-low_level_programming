#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct to save name, age, owner
 *
 * @name: name of a dog
 * @age: age of the dog
 * @owner: owner of dog
 *
 * Description: Save data for a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
#endif
