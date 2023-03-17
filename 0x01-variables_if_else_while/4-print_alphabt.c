#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The main function should print all alphabet characters in
 * lowercase except 'e' and 'q' using putchar function
 *
 * Return: The main function should return 0 (success)
*/

int main(void)
{
char character;

for (character = 'a'; character <= 'z'; character++)
{
if (character == 'e' || character == 'q')
{
continue;
}
putchar(character);
}

putchar('\n');

return (0);
}
