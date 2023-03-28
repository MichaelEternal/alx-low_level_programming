
#include"main.h"

/**
*char*_strcpy-afunctionthatcopiesthestringpointedtobysrc
*@dest:copyto
*@src:copyfrom
*Return:string
*/
char*_strcpy(char*dest,char*src)
{
intl=0;
intx=0;

while(*(src+l)!='\0')
{
l++;
}
for(;x<l;x++)
{
dest[x]=src[x];
}
dest[l]='\0';
return(dest);
}

