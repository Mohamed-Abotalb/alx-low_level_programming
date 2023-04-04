#include "main.h"

/**
 * print_chessboard - it prints the sum of the two diagonals of a square
 * matrix of integers.
 *
 * @a: checks input of the function.
 * @size: checks input of the function.
 *
 * Return: void.
*/

void print_diagsums(int *a, int size)
{
    int count, firstSize, secondSize;

    for (count = 0; count < size; count++)
    {
        firstSize += a[count];
        secondSize += a[size - count - 1];
        a += size;
    }
    printf("%d, ", firstSize);
    printf("%d\n", secondSize);
}