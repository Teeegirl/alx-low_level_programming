#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - the new struct dog whose variable is to be
  * initialised
  *
  * @d: pointer to the struct of the new dog
  * @name: name of the new dog
  * @age: age of the new dog
  * @owner: owner of the new dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	d->name = name;
	d->age = age;
	d->owner = owner;
}
