#include "main.h"
/**
* string_toupper - changes lower case strings to upper case string
* @n: characters
* Return: n
*/
char *string_toupper(char *n)
{
int i;

i = 0;
while (n[i] != '\0')
{
if (n[i] >= 'a' && n[i] <= 'z')
n[i] = n[i] - 32;
i++;
}
return (n);
}
