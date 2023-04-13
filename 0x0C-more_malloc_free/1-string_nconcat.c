#include <stdlib.h>
#include <stdio.h>
#include "main.h"

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
for (firstLength = 0; s1[firstLength] != '\0'; firstLength++)
;
for (secondLength = 0; s2[secondLength] != '\0'; secondLength++)
;

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
