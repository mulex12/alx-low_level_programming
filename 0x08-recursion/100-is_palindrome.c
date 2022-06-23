#include "main.h"

/**
 * palofmule - obtains length of a
 * @m: string
 * @sl: integer to count length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int palofmule(char *m, int sl)
{
	if (*m == 0)
		return (l - 1);
	return (palofmule(m + 1, sl + 1));
}
/**
 * palofmule1 - compares string vs string reverse
 * @m: string
 * @sl: length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int palofmule1(char *m, int sl)
{
	if (*m != *(m + sl))
		return (0);
	else if (*m == 0)
		return (1);
	return (palofmule1(m + 1, sl - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int sl;

	sl = palofmule(s, 0);
	return (palofmule1(s, sl));
}
