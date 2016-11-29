#include<stdio.h>
void main()
{
int i,l,r,size,x;
int arr[20];
printf("Enter the total no. of elements : ");
scanf("%d",&size);
printf("Enter the element X : ");
scanf("%d",&x);
printf("Enter the elements in sorted order \n");
for(i=0; i<size; i++)
 {
      scanf("%d",&arr[i]);
 }
l=0;
r=size-1;
while(l<r)
 {
   if(arr[l]+arr[r]>x)
    {
      r--;
    }
   else if(arr[l]+arr[r]==x)
    {
     printf("%d\t%d\n",arr[l],arr[r]);
     l++;
    }
    //else if(arr[l]+arr[r]<x)
    //r--;
 }
 // j++;
}
