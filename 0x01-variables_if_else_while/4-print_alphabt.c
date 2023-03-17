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
char character = 'a';

while (character <= 'z')
{
if (character == 'e' || character == 'q')
{
continue;
}
putchar(character);
character++;
}
putchar('\n');

return (0);
}
