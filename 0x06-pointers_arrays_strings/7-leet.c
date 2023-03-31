#include "main.h"

/**
 * leet - it encodes a string into 1337.
 *
 * @character: checks input of the function.
 *
 * Return: The function should return the encoded string.
*/

char *leet(char *character)
{
char *cPtr = character;
char key[] = {'A', 'E', 'O', 'T', 'L'};
int value[] = {4, 3, 0, 7, 1};
unsigned int count;

while (*character)
{

for (count = 0; count < sizeof(key) / sizeof(char); count++)
{
if (*character == key[count] || *character == key[count] + 32)
{
*character = value[count] + 48;
}
}

character++;
}

return (cPtr);
}
