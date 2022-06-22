#include "main.h"
#include <math.h>
/**
 *_sqrt_recursion - to return sqrt of n value
 *@n: integer value
 *Return: On succes 1
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sqrt(_sqrt_recursion(n)));
}
