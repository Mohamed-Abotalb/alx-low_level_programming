#include <stdlib.h>
#include "main.h"

/**
 * main - it prints the minimum number of coins to make change for an
 * amount of money, followed by a new line.
 *
 * @argc: checks input of the function.
 * @argv: checks input of the function.
 *
 * Return: The function should return (0) success.
*/

int main(int argc, char *argv[])
{

if (argc == 2)
{
int i, leastCents = 0, money = atoi(argv[1]);
int centsValues[] = {25, 10, 5, 2, 1};

for (i = 0; i < 5; i++)
{

if (money >= centsValues[i])
{
leastCents += money / centsValues[i];
money %= centsValues[i];

if (money % centsValues[i] == 0)
break;
}

}

printf("%d\n", leastCents);
}
else
{
printf("Error\n");
return (1);
}

return (0);
}
