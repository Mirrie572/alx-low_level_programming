#include "main.h"
/**
 * puts2 - prints every char of str
 * @str: parameter
 * Return: void
 */

void puts2(char *str)
{
int lengh = 0;
int t = 0;
char *y
*y = str;
int o;

while (*y != '\0')
{
y++;
lengh++;
}

t = lengh - 1;

for (o = 0; o <= t; o++)
{
if (o % 2 == 0)

{
_putchar(str[o]);
}
}

_putchar('\n');

}
