#include "main.h"
#include <string.h>
/**
 * _stren_recursion- to print stren
 * *s: string value
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
  _strlen_recursion(strlen(s+1));

}
