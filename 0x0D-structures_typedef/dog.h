#ifndef DOG
#define DOG

/**
 * struct dog - Data structure of name, age, owner.
 * @name: Dogs's name.
 * @age: Age's dog.
 * @owner: Owner's dog.
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
