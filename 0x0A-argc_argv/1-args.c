#include <stdio.h>
/**
 * main -to prints the number of arguments
 * @argc: number of command line
 * @argv: array
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
