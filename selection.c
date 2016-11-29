#include<stdio.h>
void main()
{
int i,t,n,j,pos;
int a[10];
printf("Enter the limit\n");
scanf("%d",&n);
printf("Enter the numbers\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for (i=0; i<(n-1); i++)
{
pos=i;

for (j=i+1; j<n; j++)
{
if (a[pos]>a[j])
{
pos=j;
}
}
if (pos!=i)
{
t=a[i];
a[i]=a[pos];
a[pos]=t;
}
}
printf("The sorted elements are \n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}

