#include"main.h"

/ * *
* print_number-printnumberschars
* @n : integerparams
* Return : 0
 */

voidprint_number(intn)
{
unsignedintn1;

n1 = n;

if (n < 0)
{
_putchar (' -');
n1 = -n;
}

if (n1 / 10 != 0)
{
print_number(n1 / 10);
}
_putchar ((n1 % 10) + '0');
}
