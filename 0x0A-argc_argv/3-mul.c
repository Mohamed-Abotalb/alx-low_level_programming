#include <stdlib.h>
#include "main.h"

/**
 * main - it multiplies two numbers.
 *
 * @argc: checks input of the function.
 * @argv: checks input of the function.
 *
 * Return: The function should return (0) success.
*/

int main(int argc, char *argv[])
{
(void)argc;
int result;

if (!argv[1] || !argv[2])
{
printf("Error\n");
return (1);
}
else
{
result = atoi(argv[1]) * atoi(argv[2]);

printf("%d\n", result);
}

return (0);
}
