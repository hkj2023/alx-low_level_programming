#include "main.h"

/**
 *_isalpha - to check alphabet
 *@a: the character to be checked
 *Return: Always 0 (Success)
 */
int _isalpha(int a)
{
return ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'));
}
