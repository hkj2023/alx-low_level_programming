#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - to print the opretation
 * @argc:the  number of arguments
 * @argv: array of pointers to arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int n1, n2;
char *opt;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
n1 = atoi(argv[1]);
opt = argv[2];
n2 = atoi(argv[3]);
if (get_op_func(opt) == NULL || opt[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*opt == '/' && n2 == 0) ||
(*opt == '%' && n2 == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(opt)(n1, n2));
return (0);
}
