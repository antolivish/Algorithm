#include<stdio.h>
void main()
{
int i, j,n,t;
int a[10];
printf("Enter the limit\n");
scanf("%d",&n);
printf("Enter the numbers\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<4;j++)
{
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			

			t=a[i+1];
			a[i+1]=a[i];
			a[i]=t;
		}
	}
	
}
printf("The sorted elements are \n");
for(i=0;i<n;i++)
{
	printf("%d\n",a[i]);
}
}

