#include <stdlib.h>
#include "main.h"

/**
 * word_count - it returns the number of words in a string.
 *
 * @s: checks input of the function.
 *
 * Return: The function should return the number of words.
*/

int word_count(char *s)
{
int index, count = 0;

for (index = 0; s[index] != '\0'; index++)
{
if (s[index] == ' ')
{
if (s[index + 1] != ' ' && s[index + 1] != '\0')
{
count++;
}
}
else if (index == 0)
{
count++;
}
}

count++;
return (count);
}

/**
 * **strtow - it splits a string into words.
 *
 * @str: checks input of the function.
 *
 * Return: The function should return the array of words.
*/

char **strtow(char *str)
{
int i = 0, j, k, l, n = 0, wc = 0;
char **word;
if (str == NULL || *str == '\0')
return (NULL);
n = word_count(str);
if (n == 1)
return (NULL);
word = (char **)malloc(n *sizeof(char *));
if (word == NULL)
return (NULL);
word[n - 1] = NULL;
while (str[i])
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
{
for (j = 1; str[i + j] != ' ' && str[i + j] != '\0'; j++)
;
j++;
word[wc] = (char *)malloc(j *sizeof(char));
j--;
if (word[wc] == NULL)
{
for (k = 0; k < wc; k++)
free(word[k]);
free(word[n - 1]);
free(word);
return (NULL);
}

for (l = 0; l < j; l++)
word[wc][l] = str[i + l];

word[wc][l] = '\0';
wc++;
i += j;
}

else
i++;

return (word);
}
