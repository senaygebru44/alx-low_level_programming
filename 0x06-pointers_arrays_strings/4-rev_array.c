#include "main.h"
/**
* reverse_array - function that reverse the srings
* @a: array
* @n: number
*/
void reverse_array(int *a, int n)
{
int i, b;

i = 0;
while (i < n)
{
n++;
b = a[i];
a[i] = a[n];
a[n] = b;
i++;
}
}
