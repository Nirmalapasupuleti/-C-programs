#include<stdio.h>
#include<stdlib.h>
int my_atoi(const char *);
void main(int argc,char **argv)
{
int p=atoi(argv[1]);
printf("p=%d\n",p);
int u;
u=my_atoi(argv[1]);
printf("u=%d\n",u);
}
int my_atoi(const char *s)
{
int i,num;
if(s[0]=='-')
i=1;
else
i=0;
for(num=0;s[i];i++)
{
if(s[i]>='0'&&s[i]<='9')
num=num*10+(s[i]-0);
else
break;
}
if (s[0]=='-')
num=-num;
return num;
}
