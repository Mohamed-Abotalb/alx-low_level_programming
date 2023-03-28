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
int count = 0;
while (s[count])
{
count++;
}
while (count--)
{
_putchar(s[count]);
}
_putchar('\n');
}
