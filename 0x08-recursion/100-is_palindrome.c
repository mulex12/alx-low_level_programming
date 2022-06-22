#include "main.h"

/**
 * palofmule1 - obtains length of m
 * @m: string
 * @c: integer to count length
 * Return: On success 1.
 * On error, -1 is returned.
 */
int palofmule1(char *m, int c)
{
	if (*m == 0)
		return (c - 1);
	return (palofmule1(m + 1, m + 1));
}
/**
 * palofmule - compares string vs string reverse
 * @m: string
 * @c: lenght of string
 * Return: On success 1.
 * On error, -1 is returned.
 */

int palofmule(char *a, int c)
{
	if (*m != *(m + c))
		return (0);
	else if (*m == 0)
		return (1);
	return (palofmule(m + 1, c - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 * Return: On success 1.
 * On error, -1 is returned.
 */
int is_palindrome(char *s)
{
	int c;

	c = palofmule1(s, 0);
	return (palofmul1(s, c));
}
