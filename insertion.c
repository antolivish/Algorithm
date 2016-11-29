#include<stdio.h>
void main()
{
int i,t,n;
int j=0;
int a[10];
printf("\t\tINSERTION SORT\n\n");
printf("Enter the limit\n");
scanf("%d",&n);
printf("Enter the numbers\n");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
if(a[i]>a[i+1])
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
i=0;
}
}
printf("The sorted numbers are \n");
for(i=1;i<=n;i++)
{
printf("%d\n",a[i]);
}
}
