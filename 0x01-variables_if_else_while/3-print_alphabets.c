#include <stdio.h>

/**
 * main - a program prints lowe and upper case letter
 * Return: 0 (impy success)
 */
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';

while (lowercase <= 'z' && uppercase <= 'Z')
{
putchar(lowercase);
putchar(uppercase);
lowercase++;
uppercase++;
}

putchar('\n');

return (0);

}
