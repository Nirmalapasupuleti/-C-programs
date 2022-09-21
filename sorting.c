#include<stdio.h>
void main()
{
int a[5],ele,i,j,t;
ele=sizeof(a)/sizeof(a[0]);
printf("enter an array element..\n");
for(i=0;i<ele;i++)
scanf("%d\n",&a[i]);
for(i=0;i<ele-1;i++)
{
for(j=0;j<ele-1-i;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("after sorting...\n");
for(i=0;i<ele;i++)
printf("%d \n",a[i]);
}
