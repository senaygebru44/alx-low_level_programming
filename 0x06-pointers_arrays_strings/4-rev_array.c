#include "main.h"
/**
* reverse_array - function that reverse the srings
* @a: array
* @n: number
*/
void reverse_array(int *a, int n)
{
int i, b;

for (i = 0; i < n--; i++)
{
b = a[i];
a[i] = a[n];
a[n] = b;
}
}
