#include<stdio.h>
#include<stdlib.h>
struct database{
int empid;
struct database*next;
};
int main()
{
int choice,id,position,data,iteration;
struct database *temp, *new, *head=NULL;
while(1)
{
printf("list menu\n");
printf("1.add node at given position\t 2.Display\t 3.Exit\n");
printf("Enter the choice\n");
scanf("%d",&choice);
switch(choice)
{ 
case 1:
printf("enter the position to add\n");
scanf("%d",&position);
printf("enter the empolye id\n");
scanf("%d",&id);
if(head==NULL)
{
head=(struct database*)malloc(sizeof(struct database));
head->empid=id;
head->next=NULL;
break;
}
temp=head;
for(iteration=1;iteration<position-1&&temp!=NULL;iteration++)
{
temp=temp->next;
}
if(temp==NULL)
{
printf("less element in node\n");
break;
}
new=(struct database*)malloc(sizeof(struct database));
new->empid=id;
new->next=temp->next;
temp->next=new;
break;
case 2:
if(head==NULL)
{
printf("list has no data to display\n");
break;
}
else
{
temp=head;
printf("data base in this nodes are..\n");
while(temp!=NULL)
{
printf("%d\n",temp->empid);
temp=temp->next;
}
break;
}
case 3:
exit(0);
}
}
}
