#include "main.h"
/**
 * This is the code to print out the string value using recursion
 *
 **/
void _puts_recursion(char *s)
{
  if(*s==0)
    {
      _putchar('\n');
      return 0;
    }
     _putchar(*s);
     _puts_recursion(s + 1);
}
