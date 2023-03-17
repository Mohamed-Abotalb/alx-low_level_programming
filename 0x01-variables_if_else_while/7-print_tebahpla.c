#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The main function should print all lowercase alphabet in
 * reverse followed by a new line using putchar function.
 *
 * Return: The main function should return 0 (success)
*/

int main(void)
{
char character = 'z';

while (character >= 'a')
{
putchar(character);
character--;
}
putchar('\n');

return (0);
}
