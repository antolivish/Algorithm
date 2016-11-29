#include<stdio.h>
void main()
{
int i,l,r,x,size;
int arr[20];
printf("Enter total no. of elements : ");
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

