#include "main.h"
/**
* leet - encodes a string into 1337
* @s: string to code
* Return: the incode string
*/
char *leet(char *s)
{
int i, j, k;

char x[] = "oOlLeEaAtT";
char y[] = "0011334477";
i = 0;
while (s[i] != '\0')
{
j = 0;
k = 0;
while (x[j] != '\0')
{
if (s[i] == x[j])
{
k = j;
s[i] = y[k];
}
j++;
}
i++;
}
return (s);
}
