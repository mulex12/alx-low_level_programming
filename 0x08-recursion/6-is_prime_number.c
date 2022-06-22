#include "main.h"
/**
 *primeofmule - is used to check whether prime or not.
 *@m: it represent n
 *@f: it used for loop
 *Return: 1 on success
 */
int primeofmule(int m, int f)
{
if (m == f)
return (1);
else if (m % f == 0)
return (0);
return (primeofmule(m, f + 1));
}
/**
 *is_prime_number - return out the prime number
 *@n: int a number
 *Return: values to up
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (primeofmule(n, 2));
}
