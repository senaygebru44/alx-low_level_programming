#include "main.h"
/**
* _islower - Entry point
* Description - shows 1 if the alphabet is lowercase. another cases shows 0
* @c: the character in ASCII mode
* Return: 1 for lowercase, 0 for the rest.
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
