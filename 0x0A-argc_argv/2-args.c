#include <stdio.h>
/**
* main - prints all arguments it recieved
* @argc: the number of arguments that supplied to the program
* @argv: an array of pointers to the argument
* Return: 0
*/
int main(int argc, char *argv[])
{
int arg;

for (arg = 0; arg < argc; arg++)
printf("%s\n", argv[arg]);
return (0);
}
