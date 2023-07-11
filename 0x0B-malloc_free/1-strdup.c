#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *mychar;
int i, j = 0;

if (str == NULL)
{
return (NULL);
}
i = 0;
while (str[i] != '\0')
{
i++;
}
mychar = malloc(sizeof(char) * (i + 1));
if (mychar == NULL)
{
return (NULL);
}
for (j = 0; str[j]; j++)
{
mychar[j] = str[j];
}
return (mychar);
}
