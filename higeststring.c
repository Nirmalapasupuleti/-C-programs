#include<stdio.h>
#include<string.h>
void main()
{
char s[20],i,ch,c;
printf("enter the string..\n");
scanf("%s",s);
printf("enter the char..\n");
scanf(" %c",&ch);
for(i=0,c=0;s[i];i++)
{
if(s[i]==ch)
c++;
}
printf("c=%d\n",c);
}
