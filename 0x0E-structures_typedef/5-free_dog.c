#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - it frees dogs.
 *
 * @d: the dog struct to print
 *
 * Return - void.
 *
*/

void free_dog(struct dog *d)
{

if (d)
{
if (d->name)
free(d->name);

if (d->owner)
free(d->owner);

free(d);
};

}
