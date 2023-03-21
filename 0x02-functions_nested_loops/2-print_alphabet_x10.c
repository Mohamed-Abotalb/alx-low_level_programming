#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
*/

void print_alphabet_x10(void)
{
int round;
char character;

for (round = 0; round < 10; round++)
{
for (character = 'a'; character <= 'z'; character++)
{
_putchar(character);
}
_putchar('\n');
}
}
