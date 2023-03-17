#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The main function should print all the numbers of base 16
 * in lowercase followed by a new line using putchar function.
 *
 * Return: The main function should return 0 (success)
*/

int main(void)
{
int number;
char character = 'a';

for (number = 0; number <= 15; number++)
{
if (number >= 10)
{
putchar(character);
character++;
continue;
}
putchar(number + 48);
}
putchar('\n');

return (0);
}
