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
 * *argstostr - it concatenates all the arguments of the program.
 *
 * @ac: checks input of the function.
 * @av: checks input of the function.
 *
 * Return: The function should return a string.
*/

char *argstostr(int ac, char **av)
{
int count, nc = 0, i = 0, j = 0;
char *string;

if (ac == 0 || av == NULL)
{
return (NULL);
}

for (count = 0; count < ac; count++, nc++)
{
nc += _strlen(av[count]);
}

string = malloc(sizeof(char) * nc + 1);

if (string == 0)
{
return (NULL);
}

for (count = 0; count < ac; count++)
{
for (i = 0; av[count][i] != '\0'; i++, j++)
{
string[j] = av[count][i];
}

string[j] = '\n';
j++;
}

string[j] = '\0';

return (string);
}
