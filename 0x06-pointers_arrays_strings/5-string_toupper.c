#include"main.h"
/**
*string_toupper-changealllowercasetouppercase
*@n:pointer
*
*Return:n
*/
char *string_toupper(char *n)
{
inti;

i = 0;
while (n[ != '\0')
{
if (n[i] >= 'a' && n[i] <= 'z')
n[i] = n[i] - 32;
i++;
}
return (n);
}
