#include <stdlib.h>
#include "main.h"

/**
 * _puts - it prints a string, followed by a new line, to stdout.
 *
 * @str: checks input of the function.
 *
 * Return: void.
*/

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}

}

/**
 * _atoi - it converts a string to an integer.
 *
 * @s: checks input of the function.
 *
 * Return: The function should return the inter value;
*/

int _atoi(char *s)
{
unsigned int num = 0;
int sign = 1;

do {
if (*s == '-')
{
sign *= -1;
}
else if (*s >= '0' && *s <= '9')
{
num = (num * 10) + (*s - '0');
}
else if (num > 0)
{
break;
}
} while (*s++);

return (num *sign);
}

/**
 * print_int - it prints an integer.
 *
 * @num: checks input of the function.
 *
 * Return: void;
*/

void print_int(unsigned long int num)
{
unsigned long int divisor = 1, index, resp;

for (index = 0; num / divisor > 9; index++, divisor *= 10)
;

for (; divisor >= 1; num %= divisor, divisor /= 10)
{
resp = num / divisor;
_putchar('0' + resp);
}

}

/**
 * main - it prints the result of multiplication of two numbers.
 *
 * @argc: checks input of the function.
 * @argv: checks input of the function.
 *
 * Return: The function should return 0 (success).
*/

int main(int argc, char const *argv[])
{
(void)argc;

if (argc != 3)
{
_puts("Error ");
exit(98);
}

print_int(_atoi(argv[1]) * _atoi(argv[2]));

_putchar('\n');

return (0);
}
