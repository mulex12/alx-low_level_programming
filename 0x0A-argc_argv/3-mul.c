#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int m1, m2;

	m2 = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		m2 = 1;
	}
	else
	{
		m1 = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", m1);
	}
	return (m2);
}
