#include<stdio.h>
void main()
{
int num,pos,op,c=0;
printf("enter the number..\n");
scanf("%d",&num);
L1:
printf("enter the bit position..\n");
scanf("%d",&pos);
if(pos>=0&&pos<=31)
{
printf("entetr the options 1)set\n 2)clear\n 3)comp\n");
scanf("%d",&op);
if(op==1)
{
num=num|1<<pos;
printf("%d\n",num);
}
else if(op==2)
{
num=num&~(1<<pos);
printf("%d\n",num);
}
else if(op==3)
{
num=num^1<<pos;
printf("%d\n",num);
}
else
printf("unknown option..\n");
}
else
{
c++;
printf("wrong bit position..\n");
if(c<=2)
goto L1;
}
}

