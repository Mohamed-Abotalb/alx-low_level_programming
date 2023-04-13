#include <stdlib.h>
#include "main.h"

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
 * *string_nconcat - it concatenates two strings.
 *
 * @s1: checks input of the function.
 * @s2: checks input of the function.
 * @n: checks input of the function.
 *
 * Return: The function should return the pointer to the allocated memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *string;
unsigned int i, j, firstLength, secondLength;

/* check if the string passed is null or not */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/* get the length of the two strings */
firstLength = _strlen(s1);
secondLength = _strlen(s2);

string = malloc(firstLength + n + 1);

if (string == NULL)
return (NULL);

/* copy s1 into string memory allocated */
for (i = 0; s1[i] != '\0'; i++)
string[i] = s1[i];

/* copy s2 into string memory allocated */
for (j = 0; j < n; j++)
{
string[i] = s2[j];
i++;
}

string[i] = '\0';

return (string);
}
