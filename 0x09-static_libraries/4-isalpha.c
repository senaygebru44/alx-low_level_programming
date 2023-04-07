#include "main.h"
/**
* _isalpha - Entry point
* Description - shows 1 if the input is alphabet. another case , shows 0
* @c: the character in ASCII mode
* Return: 1 for letter, 0 for the rest.
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
