#include "main.h"
/*
 *main - a program that prints out an input recursively
 *_puts_recursion-function like puts();
 *@s: input pointer 
 *Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
if (*s)
{
putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
