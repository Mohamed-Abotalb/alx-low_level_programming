#include "main.h"

/**
 * swap_int - it swaps the values of two integers.
 *
 * @a: checks input of the function.
 * @b: checks input of the function.
 *
 * Return: void.
*/

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
