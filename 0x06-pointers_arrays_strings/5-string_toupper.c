#include "main.h"

/**
 * string_toupper - it changes all lowercase letters of a string to uppercase.
 *
 * @str: checks input of the function.
 *
 * Return: The function should return the uppercase string.
*/

char *string_toupper(char *str)
{
int count;

for (count = 0; str[count] != '\0'; count++)
{

if (str[count] >= 'a' && str[count] <= 'z')
{
str[count] = str[count] - 32;
}

}

return (str);
}
