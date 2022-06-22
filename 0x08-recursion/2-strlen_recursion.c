#include "main.h"
/**
 * _stren_recursion- to print stren
 * @s: string value
 *
 **/
int _strlen_recursion(char *s)
{
  if(*s==0)
    {
      _putchar('\n');
      return;
    }
  _putchar(*s);
  return (1 + _strlen_recursion(s+1));

}
