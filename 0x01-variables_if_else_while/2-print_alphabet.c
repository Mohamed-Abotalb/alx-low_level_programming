#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The main function should print all alphabet characters in
 * lowercase using putchar function
 *
 * Return: The main function should return 0 (success)
*/

int main(void)
{
char character = 'a';

while (character <= 'z')
{
putchar(character);
character++;
}
putchar('\n');

return (0);
}
