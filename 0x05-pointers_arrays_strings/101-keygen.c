include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
*main-programthatgeneratesrandomvalid
*passwordsfortheprogram101-crackme
*
*Return:Always0(Success)
*/
intmain(void)
{
intpass[100];
inti,sum,n;

sum=0;

srand(time(NULL));

for(i=0;i<100;i++)
{
pass[i]=rand()%78;
sum+=(pass[i]+'0');
putchar(pass[i]+'0');
if((2772-sum)-'0'<78)
{
n=2772-sum-'0';
sum += n;
putchar(n+'0');
break;
}
}

return(0);
}
