#include "main.h"
/**
 * print_alphabet_x10 - uses _putchar
 * Return: void impy success
 */

void print_alphabet_x10(void)
{
char letter;
int i;
i = 0;
while (i < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)

{
_putchar(letter);
}

_putchar('\n');

i++;
}

}
