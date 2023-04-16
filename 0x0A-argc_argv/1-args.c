#include <stdlib.h>
#include "main.h"

/**
 * main - it prints the number of arguments passed into it,
 * followed by a new line.
 *
 * @argc: checks input of the function.
 * @argv: checks input of the function.
 *
 * Return: The function should return (0) success.
*/

int main(int argc, char *argv[])
{
(void)argv;

printf("%d\n", argc - 1);

return (0);
}