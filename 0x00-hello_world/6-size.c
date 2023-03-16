#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The main function should print the size of various types
 *
 * Return: The main function should return 0 (success)
*/

int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long));
printf("Size of a float: %d byte(s)\n", sizeof(float));

return (0);
}
