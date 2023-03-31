#include"main.h"
/**
*leet-encodeinto1337speak
*@n:inputvalue
*Return:nvalue
*/
char*leet(char*n)
{
inti,j;
chars1[] ="aAeEoOtTlL";
chars2[] ="4433007711";

for(i=0;n[i]! ='\0';i++)
{
for(j =0;j<10;j++)
{
if(n[i] ==s1[j])
{
n[i] =s2[j];
}
}
}
return(n);
}
