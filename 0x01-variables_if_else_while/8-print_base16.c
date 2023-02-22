#include <stdio.h>
/**
 *main - Entry point
 *Description: 'a program that prints all numbers in base 16 in lower case'
 *Return: Always 0 (Success)
 */
int main(void)
{
int n = 9;
int m = 66;
for (n = 0; n <= 9; n++)
{
putchar(n + 48);
}
while (m >= 61)
{
putchar(m);
m++;
}
putchar('\n');
return (0);
}
