#include "main.h"
/**
 * _pts_recursion - to print out the string value using recursion
 * *s:string
 * return on success 1
 *
 **/
void _puts_recursion(char *s)
{
  if(*s==0)
    {
      _putchar('\n');
      return;
    }
     _putchar(*s);
     _puts_recursion(s + 1);
}
