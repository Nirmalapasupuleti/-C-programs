#include<stdio.h>
#include<stdlib.h>
void main()
{
int *arry,memorysize=0,size;
printf("enter an array size..\n");
scanf("%d",&size);
memorysize= ((sizeof(int))*size);
printf("how much memory we allocated %d\n",memorysize);
} 
