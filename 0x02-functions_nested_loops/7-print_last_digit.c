#include "main.h"
/**
 * print_last_digit - checks my code
 * @num: is the digit
 * Return: ld the last digit
 */

int print_last_digit(int num)
{

int ld;
ld = num % 10;
if (ld < 0)
{

ld = ld * -1;

}
_putchar(ld + '0');
return (ld);
}
