#include "main.h"
/**
 * _isalpha- a program that chceks
 * @c : is our char to be checked
 * Return: 0 or 1 impy success
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
return (0);

}
