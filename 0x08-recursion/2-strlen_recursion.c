#include "main.h"
/**
* _strlen_recursion - Returns length of string
* @s: string value
* Return: on success 1
* On error, error is set correctly
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
