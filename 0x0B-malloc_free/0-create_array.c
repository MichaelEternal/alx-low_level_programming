#include"main.h"
#include<stdlib.h>
/**
*create_array-createarrayofsizesizeandassigncharc
*@size:sizeofarray
*@c:chartoassign
*Description:createarrayofsizesizeandassigncharc
*Return:pointertoarray, NULLiffail
*
*/
char *create_array(unsignedintsize, charc)
{
char *str; 
unsignedinti; 

str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (i = 0; i < size; i++)
str[i] = c;
return (str);
}
