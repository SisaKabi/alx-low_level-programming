#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * init_dog - initializes a struct with the variables
 * @d: struct to be initialized
 * @name: first variable
 * @age: second variable
 * @owner: third variable
 *
 * Return: Implicit
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
