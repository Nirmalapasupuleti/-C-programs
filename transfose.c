
#include<stdio.h>
void main()
{
int a[2][3],i,j;  //no.of rows and columns
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<3;i++)//outer loop
{
for(j=0;j<2;j++){//inner loop
printf("%d ",a[j][i]);
}
printf("\n");
}
}
