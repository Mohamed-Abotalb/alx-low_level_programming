#include "main.h"

/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: The main function prints the alphabet, in lowercase,
 * followed by a new line using _putchar prototype.
 *
 * Return: The main function should return 0 (success)
*/

int main(void)
{
print_alphabet();

return (0);
}

/**
 * print_alphabet - prints the alphabet, in lowercase from 'a' to 'z'
 *  followed by a new line.
*/

void print_alphabet(void)
{
char character;

for (character = 'a'; character <= 'z'; character++)
{
_putchar(character);
}

_putchar('\n');
}
