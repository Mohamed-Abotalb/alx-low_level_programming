#include "main.h"

/**
 * rot13 - it encodes a string into 1337.
 *
 * @character: checks input of the function.
 *
 * Return: The function should return the encoded string.
*/

char *rot13(char *character)
{
int count;
char rot13[] = "abcdefghigklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ROT13[] = "nopqrstuvwxyzabcdefghigklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *ptr = character;

while (*character)
{
for (count = 0; count <= 52; count++)
{
if (*character == rot13[count])
{
*character = ROT13[count];
break;
}
}
character++;
}

return (ptr);
}
