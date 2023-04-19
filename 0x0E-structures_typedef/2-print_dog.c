#include "dog.h"
#include <stdio.h>

/**
 * print_dog - it prints a struct dog.
 *
 * @d: the dog struct to print
 *
 * Return - void.
 *
*/

void print_dog(struct dog *d)
{

if (d)
{
printf("%s\n", d->name ? d->name : "(nil)");
printf("%s\n", d->age);
printf("%s\n", d->owner ? d->owner : "(nil)");
};

}
