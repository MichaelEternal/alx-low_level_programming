#include"main.h"
#include<stdio.h>

/**
*main-checkthecode
*
*Return:Always0.
*/
intmain(void)
{
charstr[]="Expectthebest.Preparefortheworst.Capitalizeonwhatcomes.\nhelloworld!hello-world0123456helloworld\thelloworld.helloworld\n";
char*ptr;

ptr=cap_string(str);
printf("%s",ptr);
printf("%s",str);
return(0);
}
