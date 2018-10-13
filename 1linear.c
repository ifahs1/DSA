#include<stdio.h>
void main()
{
int a[30],n,i,j;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the numbers in array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the number to be searched");
scanf("%d",&j);
for(i=0;i<n;i++)
{if (a[i]==j)
{printf("%d is present at location %d",j,i+1);
break;}
}
if (i==n)
{
printf("%d is not present in the array",j);
}}
