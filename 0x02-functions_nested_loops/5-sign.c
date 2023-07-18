#include "main.h"
/**
 * print_sign - a program prints using _putchar
 * @n: to be checked
 * Return: 0, -1 or 1 for success
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}

}
