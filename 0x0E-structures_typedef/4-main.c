#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Kolaib", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free(my_dog);
    free(my_dog->name);
    free(my_dog->owner);
    return (0);
}
