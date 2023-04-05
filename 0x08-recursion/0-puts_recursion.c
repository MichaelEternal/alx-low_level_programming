#include"main.h"
/**
*_puts_recursion-functionlikeputs();
*@s:input
*Return:Always0(Success)
*/
void_puts_recursion(char *s)
{
   if (*s)
   {
      _putchar(*s);
      _puts_recursion(s + 1);
   }

   else
      _putchar('\n');
}
