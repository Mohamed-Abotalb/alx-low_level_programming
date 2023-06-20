#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - it returns the length of a string.
 *
 * @s: checks input of the function.
 *
 * Return: The function should return the length of the string (success).
*/

int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}

/**
 * *_strcpy - it copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: checks input of the function.
 * @src: checks input of the function.
 *
 * Return: The function should return the pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
int count = -1;

do {
count++;
dest[count] = src[count];
} while (src[count] != '\0');

return (dest);
}

/**
 * new_dog - it creates a new dog.
 *
 * @name: dog's name,
 * @age: dog's age,
 * @owner: dog's owner
 *
 * Return: pointer to new struct.
 *
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;

if (!name || !owner || age < 0)
return (NULL);

dog = (dog_t *) malloc(sizeof(dog_t));

if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if ((*dog).name == NULL)
{
free(dog);
return (NULL);
}

dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if ((*dog).owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}

dog->name = _strcpy(dog->name, name);
dog->age = age;
dog->owner = _strcpy(dog->owner, owner);

return (dog);
}
