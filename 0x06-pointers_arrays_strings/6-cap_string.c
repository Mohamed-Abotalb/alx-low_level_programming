#include "main.h"
#include <stdio.h>

/**
 * isLower - it determins if the character is in lowercase.
 *
 * @c: checks input of the function.
 *
 * Return: The function should return 1 if true or 0 if false.
*/

int isLower(char c)
{
    return (c >= 'a' && c <= 'z');
}

/**
 * isSeparator - it determins which character is a separator.
 *
 * @c: checks input of the function.
 *
 * Return: The function should return 1 if true or 0 if false.
*/

int isSeparator(char c)
{
int count;
char separator[] = " \t\n.,!?\"(){}";

for (count = 0; separator[count] < 12; count++)
{

if (c == separator[count])
{
return (1);
}

}

return (0);
}

/**
 * cap_string - it concatenates two strings.
 *
 * @str: checks input of the function.
 *
 * Return: The function should return the pointer to dest.
*/

char *cap_string(char *str)
{
char *ptr = str;

int foundSeparator = 1;

while (*str)
{

if (isSeparator(*str))
{
foundSeparator = 1;
}

else if (isLower(*str) && foundSeparator)
{
*str -= 32;
foundSeparator = 0;
}

else
{
foundSeparator = 0;
}

str++;
}

return (ptr);
}
