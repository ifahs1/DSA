#include<stdio.h>
void main()
{
int a[30],i,j=1,n,key;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the numbers in array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
while(j<n)
{
key=a[j];
i=j-1;
while ((a[i]>=key)&&(i>=0))
{
a[i+1]=a[i];
i=i-1;
}
a[i+1]=key;
j=j+1;
}
printf("Sorted elements");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}}
