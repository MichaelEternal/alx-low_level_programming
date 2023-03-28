#include"main.h"
#include<stdio.h>

/**
*main-checkthecode
*
*Return:Always0.
*/
intmain(void)
{
inta;
intb;

a=98;
b=42;
printf("a=%d,b=%d\n",a,b);
swap_int(&a,&b);
printf("a=%d,b=%d\n",a,b);
return(0);
}
