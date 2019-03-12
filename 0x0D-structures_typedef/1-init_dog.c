#include "dog.h"
#include <stddef.h>

/**
* init_dog - Function that nitializes a variable of type struct dog.
* @d: dog.
* @name: dog's name.
* @age: dog's age.
* @owner: dog's owner.
*
* Return: Void.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
