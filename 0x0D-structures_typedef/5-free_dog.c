#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* free_dog - Function that frees dogs.
* @d: Dog data variable.
*
* Return: Void.
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
