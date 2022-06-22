#include "main.h"

/**
 * sqrtmule - Makes possible to evaluate from 1 to n
 * @i: same number as n
 * @j: number used  iterate from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int sqrtmule(int i, int j)
{
	if (j * j == i)
		return (j);
	else if (j * j > i)
		return (-1);
	return (sqrtmule(i, j + 1));
}
/**
 *_sqrt_recursion - to return sqrt of n value
 *@n: integer value
 *Return: On succes 1
*/

int _sqrt_recursion(int n)
{
return (sqrtmule(n, 1));
}
