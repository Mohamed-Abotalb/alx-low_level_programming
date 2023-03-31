#include "main.h"

/**
 * reverse_array - it reverses the content of an array of integers.
 *
 * @a: checks input of the function.
 * @n: checks input of the function.
 *
 * Return: void.
*/

void reverse_array(int *a, int n)
{
int first, last, temp;

for (first = 0, last = n - 1; first < last; first++, last--)
{
temp = a[last];
a[last] = a[first];
a[first] = temp;
}
}
