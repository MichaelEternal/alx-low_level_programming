#include<stdlib.h>
#include"main.h"

/**
**_memset-fillsmemorywithaconstantbyte
*@s:memoryareatobefilled
*@b:chartocopy
*@n:numberoftimestocopyb
*
*Return:pointertothememoryareas
*/
char *_memset(char *s,charb,unsignedintn)
{
unsignedinti;

for (i = 0;i < n;i++)
{
s[i] = b;
}

return(s);
}

/**
**_calloc-allocatesmemoryforanarray
*@nmemb:numberofelementsinthearray
*@size:sizeofeachelement
*
*Return:pointertoallocatedmemory
*/
void *_calloc(unsignedintnmemb,unsignedintsize)
{
char *ptr;

if(nmemb == 0 || size == 0)
return (NULL);

ptr = malloc (size *nmemb);

if (ptr == NULL)
return (NULL);

_memset (ptr, 0, nmemb *size);

return(ptr);
}
