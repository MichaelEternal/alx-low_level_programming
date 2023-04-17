#include<stdio.h>
#include"dog.h"

/**
*main-checkthecode
*
*Return:Always0.
*/
intmain(void)
{
dog_t*my_dog;

my_dog=new_dog("Poppy",3.5,"Bob");
printf("Mynameis%s,andIam%.1f:)-Woof!\n",my_dog->name,my_dog->age);
return(0);
}
