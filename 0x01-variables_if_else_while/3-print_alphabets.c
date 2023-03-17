#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The main function should print the alphabet in lowercase, and
 * then in uppercase, followed by a new line using putchar function.
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

character -= 58;

while (character <= 'Z')
{
putchar(character);
character++;
}

putchar('\n');

return (0);
}
