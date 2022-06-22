#include "main.h"
/**
*factorial - used to print n factorial.
*@n: intiger value
*Return: 1 on success
*return -1 on errror
*/
int factorial(int n)
{
	if (n < 0)
	  {
		return (-1);
	  }
	if (n == 0)
	  {
		return (1);
	  }
	return (n * factorial(n - 1));
}
