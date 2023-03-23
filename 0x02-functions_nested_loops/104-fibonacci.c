#include <stdio.h>

/**
 * numLength - It is a function returns the length of a fibonacci number
 *
 * @num: checks for input of fibonacci number
 *
 * Return: The function should return the number of digits
*/

int numLength(int num)
{
int length = 0;

if (!num)
{
return (1);
}
while (num)
{
num /= 10;
length++;
}
return (length);
}

/**
 * main - Entry point
 *
 * Description: The main function prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: The main function should return 0 (success)
*/

int main(void)
{
int count, initialZeros;
unsigned long num1 = 1, num2 = 2, num3, zero1 = 0, zero2 = 0,
zero3 = 0, max = 100000000;


for (count = 1; count <= 98; count++)
{
if (zero1 > 0)
{
printf("%lu", zero1);
}
initialZeros = numLength(max) - 1 - numLength(num1);

while (zero1 > 0 && initialZeros > 0)
{
printf("%d", 0);
initialZeros--;
}
printf("%lu", num1);
num3 = (num1 + num2) % max;
zero3 = zero1 + zero2 + (num1 + num2) / max;
num1 = num2;
zero1 = zero2;
num2 = num3;
zero2 = zero3;
if (count != 98)
{
printf(", ");
}
}
putchar('\n');

return (0);
}
