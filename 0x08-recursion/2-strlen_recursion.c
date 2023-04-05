#include"main.h"
/**
*_strlen_recursion-Returnsthelengthofastring.
*@s:Thestringtobemeasured.
*
*Return:Thelengthofthestring.
*/
int_strlen_recursion(char *s)
{
intlongit = 0;

if (*s)
{
longit + +;
longit + = _strlen_recursion(s + 1);
}

return (longit);
}

