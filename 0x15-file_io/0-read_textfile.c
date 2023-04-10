#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - to read a file
 * @filename: the staring to be read
 * @letters: the number of letters
 * Return: Always 0 (Success)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t o, r, w;
char *content;
if (filename == NULL)
return (0);
o = open(filename, O_RDONLY);
if (o == 0)
return (0);
content = malloc(sizeof(char) * (letters + 1));
if (content == NULL)
close(o);
return (0);

r = read(o, content, letters);
if (r == -1)
close(o);
free(content);
return (0);
w =  write(STDOUT_FILENO, content, r);
if (w == -1 || w != r)
close(o);
free(content);
return (0);
}
