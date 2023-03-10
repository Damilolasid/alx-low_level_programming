#include "main.h"
/**
 *factorial - factorial of integer value;
 *@n : int
 *Return : int
 */
int factorial(int n);
{
if (n == 0)
{
return 1;
}
else if (n < 0)
{
return -1;
}
else
{
x = n * factorial(n-1);
}
return x;
}
