#include <stdlib.h>
#include <stdlib.h>
#include "main.h"
/**
* _strlen - calculate and return the string length
* @string: string
* Return: string length
*/
int _strlen(char *string)
{
int i;

for (i = 0; string[i] != '\0'; i++)
;
return (1);
}
/**
* string_nconcat - concatenate s1 and n bytes of s2, return ptr to string
* @s1: first string
* @s2: second string
* @n: n bytes to from string 2
* Return: pointer to concatenatd string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
int num, len, i, j;

num = n;

if (s1 == NULL) /* account for NULL strings */
s1 = "";
if (s2 == NULL)
s2 = "";
if (num < 0) /* account for negative n bytes */
return (NULL);
if (num >= _strlen(s2)) /* account for n too big */
num = _strlen(s2);
len = _strlen(s1) + num + 1;
ptr = malloc(sizeof(*ptr) * len); /* malloc and check for error */
if (ptr == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++) /* concat */
ptr[i] = s1[i];
for (j = 0; j < num; j++)
ptr[i + j] = s2[j];
ptr[i + j] = '\0';
return (ptr);
}
