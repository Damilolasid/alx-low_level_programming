#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - create an array of chars;
 *and initilializes it with specific characters;
 *@size: size of array
 *@c: intial value
 *
 *Return: a pointer to ar or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int i;
if (size == 0)
return (NULL);
ar = (char *)malloc(sizeof(char) * size);
if (ar == NULL)
return (NULL);
for (i = 0; i < size; i++)
ar[i] = c;
return (ar);
}
