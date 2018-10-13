#include<stdio.h>
void main()
{
int a[30],n,temp,key,first,last,mid,i,j;
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
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
     }}}
printf("array after sorting:");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
printf("enter the number to be searched");
scanf("%d",&key);
first=0;
last=n-1;
while (first<=last)
{
mid=(first+last)/2;
if (a[mid]<key)
first=mid+1;
else if (a[mid]==key)
{printf("%d is present at location %d",key,mid+1);
break;}

else if(a[mid]<key)
{last=mid-1;
}
if(first>last)
printf("element not present in the array");
}}
