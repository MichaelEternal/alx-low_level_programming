#ifndefCALC_H
#defineCALC_H
/**
*structop-Astructop.
*@op:Theoperator.
*@f:Theassociatedfunction.
*/
typedefstructop
{
char*op;
int(*f)(inta,intb);
}op_t;

intop_add(inta,intb);
intop_sub(inta,intb);
intop_mul(inta,intb);
intop_div(inta,intb);
intop_mod(inta,intb);
int(*get_op_func(char*s))(int,int);

#endif
