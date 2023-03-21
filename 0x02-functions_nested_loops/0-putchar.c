#include "main.h"

/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: The main function prints "_putchar" followed by a new line
 * using putchar prototype.
 *
 * Return: The main function should return 0 (success)
*/

int main(void)
{
char characters[] = "_putchar";

for (int i = 0; i <= 8; i++)
{
_putchar(characters[i]);
}
_putchar('\n');

return (0);
}
