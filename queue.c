#include<stdio.h>
#include<stdlib.h>
#define size 5
void enqueue(int *);
void dequeue(int *);
void display(int *);
int front=0,rear=0;
int main()
{
int que[size];
int op;
while(1)
{
printf("enter your choice..\n");
printf("1)enqueue 2)dequeue 3)display 4)exit 5)clear_screen");
scanf("%d",&op);
switch(op)
{
case 1:enqueue(que);break;
case 2:dequeue(que);break;
case 3:display(que);break;
case 4:exit(0);
case 5:system("clear");break;
default:printf("unknown option..\n");
}
}
}
/**Enqueue**/
void enqueue(int *s)
{
if(rear>=size)
{
printf("queue is over flow..\n");
return;
}
int num;
printf("enter num..\n");
scanf("%d",&num);
s[rear]=num;
rear++;
}
/**dequeue**/
void dequeue(int *s)
{
if((front==0)&&(rear==0))
{
printf("queue is underflow..\n");
return;
}
int i;
{
printf("delete num=%d\n",s[front]);
for(i=front;i<rear;i++)
s[i]=s[i+1];
rear--;
}
}
/**dispaly**/
void display(int *s)
{
if((front==0)&&(rear==0))
{
printf("queue is empty..\n");
return;
}
int i;
for(i=front;i<rear;i++)
printf("%d",s[i]);

printf("\n");
}

