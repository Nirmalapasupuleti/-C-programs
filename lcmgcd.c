#include<stdio.h>
void main()
{
int num1,num2,gcd,lcm,count=1,small;
printf("enter 2 integer numbers..\n");
scanf("%d %d", &num1, &num2);
small=(num1<num2)?num1:num2;
while(count<=small)
{
if(num1%count==0 && num2%count==0)
{
gcd=count;
}
count++;
lcm=(num1*num2)/gcd;
printf("gcd=%d\n lcm=%d\n",gcd,lcm);
}
}
