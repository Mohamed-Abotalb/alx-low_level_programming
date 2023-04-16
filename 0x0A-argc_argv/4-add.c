#include <stdlib.h>
#include "main.h"

/**
 * main - it it adds positive numbers and prints the result,
 * followed by a new line.
 *
 * @argc: checks input of the function.
 * @argv: checks input of the function.
 *
 * Return: The function should return (0) success.
*/

int main(int argc, char *argv[])
{
int result, i;
char *character;

for (i = 1; i < argc; i++)
{

for (character = argv[i]; *character; character++)
{

if (*character < '0' || *character > '9')
{
printf("Error\n");
return (1);
}

}

result = atoi(argv[i]);
}

printf("%d\n", result);

return (0);
}
