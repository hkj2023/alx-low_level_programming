#include <stdlib.h>
#include <stdio.h>
/**
 * _opscode - to print opscode
 * @c: char c
 * @n : Integer n
 * @a inteher a
 * main: entry point
 * Return: Always 0 (Success)
 */

void _opcodes(char *c, int a)
{
	int i;
for (i = 0; i < a; i++)
{
printf("%.2hhx\n", c[i]);
if (i < a - 1)
printf(" ");
}
printf("\n");
}

/**
 * main - entyr point
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: O
 */
int main(int argc, char **argv)
{
int a;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
a = atoi(argv[1]);
if (a < 0)
{
printf("Error\n");
exit(2);
}
_opcodes((char *)&main, a);
return (0);
}
