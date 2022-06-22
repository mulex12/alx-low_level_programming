#include "main.h"
/**
 * _stren_recursion- to print stren
 * @s: string value
 * Return: on success value
 **/
int _strlen_recursion(char *s)
{
  if(*s != '\0')
    {
  return (1 + _strlen_recursion(s + 1));
    }
  return(0);
}
