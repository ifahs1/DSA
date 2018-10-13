#include<stdio.h>
void main()
{
int a[30],n,i,j,t;
printf("enter the limit of the array");
scanf("%d",&n);
printf("enter the numbers in array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
  for(j=0;j<n-1;j++)
  {
    if(a[j]>a[j+1])
    {
      t=a[j];
      a[j]=a[j+1];
      a[j+1]=t;
     }}}
printf("array after sorting:");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}

