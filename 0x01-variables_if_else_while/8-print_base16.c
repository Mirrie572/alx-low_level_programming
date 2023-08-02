#include <stdio.h>
/**
 * main - a program prints base 16 numbers
 * Return: 0 impy success
 */
int main(void)
{
char digit;

for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}

for (digit = 'a'; digit <= 'f'; digit++)
{
putchar(digit); }

putchar('\n');

return (0);
}
