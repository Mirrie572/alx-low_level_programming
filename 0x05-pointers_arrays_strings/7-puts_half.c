#include "main.h"
/**
 * puts_half- half the string
 * @str: string
 * Return: length
 */

void puts_half(char *str)
{
int a, n, lengt;

lengt = 0;

for (a = 0; str[a] != '\0'; a++)
lengt++;

n = (lengt / 2);

if ((lengt % 2) == 1)
n = ((lengt + 1) / 2);

for (a = n; str[a] != '\0'; a++)
_putchar(str[a]);
_putchar('\n');

}
