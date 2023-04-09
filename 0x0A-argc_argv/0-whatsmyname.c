#include <stdio.h>
/**
* main - prints the program line followed by a new line
* @argc: the number of argunments supplied to the program
* @argv: an array of pointer to the argument
* Return: always 0
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
