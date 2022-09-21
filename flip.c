#include<stdio.h>
void main()
{
int num,pos;
printf("enter the number..\n");
scanf("%d",&num);
printf("enter the bit pos..\n");
scanf("%d",&pos);
printf("before num=%d\n",num);
num=num^1<<pos-1;
printf("after num=%d\n",num);
}
