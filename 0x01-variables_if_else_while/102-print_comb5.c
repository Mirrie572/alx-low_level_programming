#include <stdio.h>
/**
 * main - a program prints all possible combination two two digit
 * Return: 0 impy success
 */
int main(void)
{
int number1;
int number2;

for (number1 = 0; number1 <= 99; number1++)
{
for (number2 = 0; number2 <= 99; number2++)
{
if (number1 <= number2)
{
putchar('0' + number1 / 10);
putchar('0' + number1 % 10);
putchar(' ');
putchar('0' + number2 / 10);
putchar('0' + number2 % 10);

if (number1 != 99 || number2 != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
