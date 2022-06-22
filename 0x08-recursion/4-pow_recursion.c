#include "main.h"
/**
* _pow_recursion - raises x to return power of y.
* @x: integer value
* @y: integer value
* Return: on success 1.
* on erroe : -1 if lower than 0
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (0);
return (x * _pow_recursion(x, y - 1));
}
