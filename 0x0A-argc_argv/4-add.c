#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * _isnumber - checks if string is a number
 * @s: string
 *
 * Return: On success 1.
 * If not a number, 0 is returned.
 */
int _isnumber(char *s)
{
	int i, check, d;

	i = 0, d = 0, check = 1;
	if (*s == '-')
		i++;
	for (; *(s + i) != 0; i++)
	{
		d = isdigit(*(s + i));
		if (d == 0)
		{
			check = 0;
			break;
		}
	}
	return (check);
}
/**
 * main - Entry point
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, m1, m2;

	m2 = 0, m1 = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (_isnumber(argv[i]))
				m1 += atoi(argv[i]);
			else
				m2 = 1;
		}
	}
	if (m2 == 0)
		printf("%i\n", m1);
	else
		printf("%s\n", "Error");
	return (m2);
}
