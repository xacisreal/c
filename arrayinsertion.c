#include<stdio.h>
int main()
{
int a[10],i,n,in,pos;
printf("\n Enter the limit:");
scanf("%d",&n);
printf("\n Enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n Enter the element to be inserted:");
scanf("%d",&in);
printf("\n Position inserting");
scanf("%d",&pos);
for(i=n;i>=pos;i--)
{
a[i]=a[i-1];
}
a[pos-1]=in;
for(i=0;i<n+1;i++)
printf("%d\n",a[i]);
return 0;
}
