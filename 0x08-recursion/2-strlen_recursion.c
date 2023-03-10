#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
int strlet = 0;
if (*s)
{
strlet++;
strlet = strlet + _strlen_recursion(s + 1);
}
return (strlet);
}
