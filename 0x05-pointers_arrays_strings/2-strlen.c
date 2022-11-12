#include "main.h"

/**
*_strlen - returns the length of a string
* @s: string
*Return: returns length as integer;
*/

int _strlen(char *s)
{
int len = 0, i;

for (i = 0; s[i] != '\0'; i++)
{
len++;
}
return (len);
}
