
#include<stdio.h>
#include<stdlib.h>
void main(int argc ,char **argv)
{
int i;
if(argc!=2)
{
printf("usage:./my_strlen string\n");
return;
}
i=strlen(argv[1]);
printf("the string %s length=%d\n",argv[1],i);
}        
