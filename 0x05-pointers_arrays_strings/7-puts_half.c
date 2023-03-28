#include "main.h"

/**
 * puts_half - it prints half of a string, followed by a new line.
 *
 * @str: checks input of the function.
 *
 * Return: void.
*/

void puts_half(char *str)
{
int length = 0;
/* get the length of the string */
while (str[length] != '\0')
{
length++;
}

length++;

for (length /= 2; str[length] != '\0'; length++)
{
_putchar(str[length]);
}
_putchar('\n');
}
