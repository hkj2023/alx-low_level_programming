#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - to append text
 * @filename: the filename to be opened
 * @text_content: the content of file
 * Return: Always 0 (Success)
 */

int append_text_to_file(const char *filename, char *text_content)
{
int o, w, i;
if (filename == NULL)
return (-1);
o = open(filename, O_WRONLY | O_APPEND);
i = 0;
if (text_content)
{
while (text_content[i])
w = write(o, text_content, i);
i++;
}
if (w == -1 || o == -1)
{
return (-1);
}
close(o);
return (1);
}
