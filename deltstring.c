#include<stdio.h>
#include<string.h>
void main()
{
char s[20],ch;
int i,c,j;
printf("enter the string...\n");
scanf("%s",s);
printf("enter the char..\n");
scanf(" %c",&ch);
printf("before s=%s\n",s);
for(i=0;s[i];i++)
{
if(s[i]==ch)
{
for(j=i;s[j];j++)
s[j]=s[j+1];
}
printf("after s=%s\n",s);
}
}
