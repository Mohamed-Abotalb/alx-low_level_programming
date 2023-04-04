#include "main.h"

/**
 * print_chessboard - it prints the chessboard.
 *
 * @a: checks input of the function.
 *
 * Return: The function should return the chessboard.
*/

void print_chessboard(char (*a)[8])
{
int firstCount, secondCount;

for (firstCount = 0; firstCount < 8; firstCount++)
{

for (secondCount = 0; secondCount < 8; secondCount++)
{
_putchar(a[firstCount][secondCount]);
}

_putchar('\n');
}
}
