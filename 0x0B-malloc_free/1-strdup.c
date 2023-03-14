#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a new memory address
 *which contains a copy of a string given as a parameter.
 *@str: the main string
 *
 *Return: returns a pointer to the string that was copied
 *It returns NULL if there is an insuficient memory
 */
char *_strdup(char *str)
{
char *duplicate;
int i, length = 0;
if (str == NULL)
return (NULL);
while (str[length] != '\0')
length++;
duplicate = (char *)malloc((sizeof(char) * length) +1);
if (duplicate == NULL)
return (NULL);
for (i = 0; i < length; i++)
duplicate[i] = str[i];
duplicate[length] = '\0';
return (duplicate);
}
