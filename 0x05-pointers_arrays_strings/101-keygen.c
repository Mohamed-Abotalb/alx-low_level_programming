#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * description: The main function should generate a random password
 * for the program 101-crackme.
 *
 * Return: The function should return 0 (success);
*/

int main(void)
{
    int sum;
    char c;

    srand(time(NULL));
    while (sum <= 2645)
    {
        c = rand() % 128;
        sum += c;
        putchar(c);
    }
    putchar(2772 - sum);
    return (0);
}
