#include "main.h"
/**
 * print_alphabet - uses _putchar
 * Return: void impy success
 */
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
