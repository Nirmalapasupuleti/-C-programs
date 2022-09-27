#include<stdio.h>
void main()
{
char a[20];
int i,j,k;
printf("enter the string..\n");
scanf("%s",a);
for(i=0;a[i];i++)
{
for(j=i+1;a[j];j++)
{
if(a[i]==a[j])
{
for(k=j;a[k];k++)
a[k]=a[k+1];
j=j-1;
}
printf("%s\n",a);
}
}
}
