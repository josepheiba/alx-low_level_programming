#ifndef DOG_H
#define DOG_H

/**
 * struct dog - check the code
 * @name: variable
 * @age: variable
 * @owner: variable
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
