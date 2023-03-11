#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main -to prints the number of arguments
 * @argc: number of command line
 * @argv: array
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
