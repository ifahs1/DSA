#include<stdio.h>
#include<stdlib.h>
int top=-1,a[20],n;
void push();
void pop();
void display();
int main()
{
int a,r;
printf("Enter the limit");
scanf("%d",&n);
n=n-2;
do
{
printf("enter the choice");
printf("\n1.push\n2.pop\n3.display\n4.exit");
scanf("%d",&a);
switch(a)
{
 case 1:push();
 break;
 case 2:pop();
 break;
 case 3:display();
 break;
 case 4:printf("exited the program\n");
 break;
 default:printf("invalid input");
 break;
}
printf("Do you want to continue (1 for yes & 0 for not)");
scanf("%d",&r);
}while(r==1);
}
void push()
{
 int e;
 if(top>n)
 {
  printf("stack overflow\n");
 }
else
 {
  printf("Enter the element: ");
  scanf("%d",&e);
  top=top+1;
  a[top]=e;
 }
}
void pop()
{
 int item;
 if(top<=-1)
 {
  printf("stack underflow \n");
 }
else
 {
  item=a[top];
  printf("%d is dropped \n",item);
  top=top-1;
 }
}
void display()
{
 int i;
 if(top==-1)
 {
  printf("stack is empty \n");
 }
else
 {
  for(i=top;i>=0;i--)
  {
  printf("%d",a[i]);
  printf("\n");
  }
 }
}

