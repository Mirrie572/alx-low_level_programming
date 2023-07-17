#include <stdio.h>
/**
 * main - a program prints all possible combination
 * Return: 0 impy success
 */
int main(void)
{
int digit1;
int digit2;

for (digit1 = 0; digit1 <= 8; digit1++)
{
for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
{
putchar('0' + digit1);
putchar('0' + digit2);
if (digit1 != 8 || digit2 != 9)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
