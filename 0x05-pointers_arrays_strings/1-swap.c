#include "main.h"
/**
 *swap_int - swaps te values of two integers
 *@a: one integer
 *@b: the second integer
 *Return 0
 */
void swap_int(int *a, int *b);
{
int c;
c = *a;
*a = *b;
*b = c;
}
