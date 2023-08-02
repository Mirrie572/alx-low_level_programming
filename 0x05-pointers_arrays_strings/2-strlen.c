#include "main.h"

/**
 * _strlen - a function that print lenght
 * @s: is the input parameter
 * Return: length which is an int
 */

int _strlen(char *s)
{
int lengh = 0;
while (*s != '\0')
{
lengh++;
s++;
}
return (lengh);
}
