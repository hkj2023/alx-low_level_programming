#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#define BUFFER 1024
/**
 * main - entry point
 * @argc: argument no
 * @argv: arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int file_from, file_to, a, b, c;
char bufer[BUFFER];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((a = read(file_from, bufer, BUFFER)) > 0)
{
if (file_to == -1 || write(file_to, bufer, a) != a)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(file_from);
exit(99);
}
}
if (a == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
b = close(file_from);
c = close(file_to);
if (b == -1 || c == -1)
{
if (b == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
if (c == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
exit(100);
}
return (0);
}
