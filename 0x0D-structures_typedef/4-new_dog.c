#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* *_strdup - Function that cpy_array.
* @str: entry string.
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
char *_strdup(char *str)
{
	int size;
	char *cpy_array;
	int index;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0' ; size++)
	{
	}
	cpy_array = malloc(sizeof(char) * size);
	if (cpy_array == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		cpy_array[index] = str[index];
	}
	return (cpy_array);
}



/**
* new_dog - Function that creates a new dog.
* @name: Dog's name.
* @age: Dog's age.
* @owner: Dog's owner.
*
* Return: new dog or NULL when fails.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Runo_perruno;

	Runo_perruno = malloc(sizeof(dog_t));
	if (Runo_perruno == NULL)
	{
		return (NULL);
	}
	if (name)
	{
		Runo_perruno->name = _strdup(name);
		if (Runo_perruno->name == NULL)
			free(Runo_perruno);
	}
	
	
	Runo_perruno->age = age;

	if (owner)
	{
		Runo_perruno->owner = _strdup(owner);

		if (Runo_perruno->owner == NULL)
		{
			if (Runo_perruno->name != 0)
				free(Runo_perruno->name);
			free(Runo_perruno);
		}
	}
	return (Runo_perruno);
}
