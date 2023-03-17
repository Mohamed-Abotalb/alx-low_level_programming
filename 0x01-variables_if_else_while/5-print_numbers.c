#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The main function should print all numbers from 0 to 9.
 *
 * Return: The main function should return 0 (success)
*/

int main(void)
{
int number;

for (number = 0; number <= 9; number++)
{
printf("%d", number);
}
putchar('\n');

return (0);
}
