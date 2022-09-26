#include<stdio.h>
void main()
{
int n,choice;
printf("enter an integer in decimal number system..\n");
scanf("%d",&n);
printf("\n1.convert %d to octal integer",n);
printf("\n2.convert %d to hexadecimal integer",n);
printf("\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("%d of decimla number system,in octal is %o",n,n);
break;
case 2:
printf("%d of decimal number system,in hexadecimal is %x",n,n);
break;
default:
printf("wrong choice");
}
}
