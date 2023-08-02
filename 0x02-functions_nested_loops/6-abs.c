#include "main.h"
/**
 * _abs - check the code
 *
 * @num: number to be checked
 * Return: Absolute value
 */
int _abs(int num)
{

if (num < 0)
{
int abs_val;
abs_val = num * -1;
return (abs_val);
}

return (num);

}

