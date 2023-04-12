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
int file_from, file_to;
ssize_t number;
char buffer[BUFFER];
if (argc != 3)
dprintf(STDERR_FILENO, "Usage: copy file_from file_to\n");
exit(97);
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_to == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
while ((number = read(file_from, buffer, BUFFER)) > 0)
{
if (write(file_to, buffer, number) != number)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if (number == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
if (close(file_from) != 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
if (close(file_to) != 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
exit(100);
}
return (0);
}
