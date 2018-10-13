#include<stdio.h>
void main()
{
int a[30],i,j,n,min,p;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the numbers in array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Original Array");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
for(i=0;i<n;i++)
{
min=a[i];
p=i;
for (j=i+1;j<n;j++)
if(a[j]<min)
{
min=a[j];
p=j;
}
a[p]=a[i];
a[i]=min;
}
printf("Sorted array");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
