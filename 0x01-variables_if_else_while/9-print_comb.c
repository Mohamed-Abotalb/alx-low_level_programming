#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The main function should print all possible combinations of
 * single-digit numbers from 0 to 9 using putchar function.
 *
 * Return: The main function should return 0 (success)
*/

int main(void)
{
int number;

for (number = 0; number <= 9; number++)
{

putchar(number + 48);

if (number == 9)
{
break;
}

putchar(',');
putchar(' ');
}
putchar('\n');

return (0);
}
