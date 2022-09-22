#include<stdio.h>
#include<stdlib.h>
#define size 5
void push(int  *);
void pop(int *);
void display(int *);
int top=-1;
int main()
{
int stk[size];
int op;
while(1)
{
printf("enter your choice..\n");
printf("1)push 2)pop 3)display 4)exit 5)clear_screen\n");
scanf("%d",&op);
switch(op)
{
case 1:push(stk);break;
case 2:pop(stk);break;
case 3:display(stk);break;
case 4:exit(0);
case 5:system("clear");break;
default:printf("unknown option..\n");
}
}
}
/**push**/
void push(int *s)
{
if(top>=size-1)
{
printf("stack is over flow..\n");
return;
}
int num;
printf("enter num..\n");
scanf("%d",&num);
top++;
s[top]=num;
}
/**pop**/
void pop(int *s)
{
if(top<=-1)
{
printf("stack is underflow..\n");
return;
}
printf("delete num=%d\n",s[top]);
top--;
}
/**display**/
void display(int *s)
{
if(top==-1)
{
printf("stack is empty..\n");
return;
}
int i;
for(i=0;i<=top;i++)
printf("%d",s[i]);
printf("\n");
}
