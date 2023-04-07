#include "main.h"

int check_prime(int i, int num);

/**
 * is_prime_number - it returns 1 if the input integer is a prime number,
 * otherwise return 0.
 *
 * @n: checks input of the function.
 *
 * Return: The function should return 1 or 0.
*/

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (check_prime(2, n));
}

}

/**
 * check_prime - it checks for the number is prime or not.
 *
 * @num: checks input of the function.
 * @i: checks input of the function.
 *
 * Return: The function should return 1 or 0.
*/
int check_prime(int i, int num)
{
if (num % i == 0)
{
return (0);
}
else if (num > 1 && i == num)
{
return (1);
}
else
{
return (check_prime(i + 1, num));
}
}
