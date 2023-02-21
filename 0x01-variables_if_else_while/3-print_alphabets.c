#include <stdio.h>
/**
 *main - Entry point
 *Description: 'print upper and lowercase'
 *Return: Always 0 (Success)
 */
int main(void)
{
int n = 97;
int m = 65;
while (97 <= 122)
{
putchar(n);
n++;
}
while (65 <= 90)
{
putchar(m);
m++;
}
putchar('\n');
return (0);
}
