#include<stdio.h>
void main()
{
int a[50],i,n,s;
printf("Enter the size of the array:");
scanf("%d",&n);
printf("\n Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n The array elements are:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("\n Enter the number to be search");
scanf("\n %d",&s);
printf("\n The elements to be search is %d",s);
for(i=0;i<n;i++)
{
if(a[i]==s)
{
printf("\n The given number position is %d \n",i+1);
break;
}
}
if(i==n)
{
printf("\n The given number is not listed \n");
}
}


