#include "main.h"

#include <stdlib.h>
/**
 * create_file - to create a file
 * @filename: filename
 * @text_content - the contents of the text
 * Return: Always 0 (Success)
 *
 */
int create_file(const char *filename, char *text_content)
{
int o, w, i;
if (filename == NULL)
{
return (-1);
}
o = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (o == -1)
{
return (-1);
}
if (text_content != NULL)
{
i = 0;
}
while (text_content[i] != '\0')
{
i++;
}
w = write(o, text_content, i);
if (w == -1 || w != i)
close(o);
return (-1);
close(o);
return (1);
}
