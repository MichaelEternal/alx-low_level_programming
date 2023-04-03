#include"main.h"
#include<stdio.h>

/**
*simple_print_buffer-printsbufferinhexa
*@buffer:theaddressofmemorytoprint
*@size:thesizeofthememorytoprint
*
*Return:Nothing.
*/
voidsimple_print_buffer(char*buffer,unsignedintsize)
{
unsignedinti;

i=0;
while(i<size)
{
if(i%10)
{
printf("");
}
if(!(i%10)&&i)
{
printf("\n");
}
printf("0x%02x",buffer[i]);
i++;
}
printf("\n");
}

/**
*main-checkthecode
*
*Return:Always0.
*/
intmain(void)
{
charbuffer[98]={0};
charbuffer2[98]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};

simple_print_buffer(buffer,98);
_memcpy(buffer+50,buffer2,10);
printf("-------------------------------------------------\n");
simple_print_buffer(buffer,98);
return(0);
}
