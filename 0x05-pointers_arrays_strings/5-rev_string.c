#include "main.h"

/**
 * rev_string - it prints a string, in reverse, followed by a new line.
 *
 * @s: checks input of the function.
 *
 * Return: void.
*/

void rev_string(char *s)
{
int count, length = 0;
char temp;

/* get the length of the string */
while (*s != '\0')
{
length++;
s++;
}

/* swap the characters */
for (count = 0; count < length / 2; count++)
{
temp = s[count];
s[count] = s[length - 1 - count];
s[length - 1 - count] = temp;
}
}

