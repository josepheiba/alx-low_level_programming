#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen_recursion - check code
 * @s: input
 * Return: check function declaration
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * *_strcpy - check code
 * @dest: input
 * @src: input
 * Return: check function declaration
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		*(dest + i) = *(src + i);
	i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

/**
 * new_dog - check code
 * @name: input
 * @age: input
 * @owner: input
 * Return: check function declaration
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * _strlen_recursion(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * _strlen_recursion(owner) + 1);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->owner = _strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
