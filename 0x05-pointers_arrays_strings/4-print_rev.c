#include "main.h"

/**
 * print_rev - it prints a string, in reverse, followed by a new line.
 *
 * @s: checks input of the function.
 *
 * Return: void.
*/

void print_rev(char *s)
{
int count;
while (*s != '\0')
{
count++;
s++;
}
while (count--)
{
putchar(s[count]);
}
putchar('\n');
}
