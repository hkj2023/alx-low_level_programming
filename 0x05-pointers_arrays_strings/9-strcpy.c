#include "main.h"

/**
 * *_strcpy -  string copy
 * @dst: destination
 * @src: string
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dst, char *src)
{
int i = -1;
do {
i++;
dst[i] = src[i];
} while (src[i] != '\0');
return (dst);
}
