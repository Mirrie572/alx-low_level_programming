#include <stdio.h>

/**
 * main - a program uses putchar to print lower cases
 * Return: 0 (impy success)
 */
int main(void)
{
char Letter = 'a';

while (Letter <= 'z')
{putchar(Letter);
Letter++; }

putchar('\n');

return (0);
}
