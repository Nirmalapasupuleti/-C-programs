#include<stdio.h>
void main(int argc, char **argv)
{
if(argc<3)
{
printf("usage:\n");
return;
}
FILE *fs,*fd;
char ch;
int i;
fs=fopen(argv[1],"r");
if(fs==0)
{
printf("FILE not present..\n");
return;
}
for(i=2;i<argc;i++)
{
fd=fopen(argv[i],"r+");
while((ch=fgetc(fs))!=-1)
fputc(ch,fd);
rewind(fs);
}
}
