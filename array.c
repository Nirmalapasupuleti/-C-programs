#include<stdio.h>
void main()
{
int a[5],ele,i,l,s;
ele=sizeof(a)/sizeof(a[0]);
printf("enter an array element..\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
l=a[0];
s=a[0];
for(i=0;i<ele;i++)
{
if(a[i]>l)
{
l=a[i];
}
else if(a[i]<s)
s=a[i];
}
printf("largest ele=%d smallest ele=%d\n",l,s);
}

