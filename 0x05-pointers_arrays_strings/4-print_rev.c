#include "main.h"
/**
 * print_rev - a function which prints in reverse
 * @s: is the input
 * Return: void
 */

void print_rev(char *s)
{
int lengh = 0;
int O;

while (*s != '\0')
{
lengh++;
s++;
}
s--;

for (O = lengh; O > 0; O--)
{
_putchar(*s);
s--;

}
_putchar('\n');
}
