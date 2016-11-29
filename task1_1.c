#include<stdio.h>
void merge(int [],int ,int ,int );
void split(int [],int ,int );
void main()
{
 int arr[30];
 int i,size,x,l,r;
 printf("Enter total no. of elements : ");
 scanf("%d",&size);
 printf("Enter the element X : ");
 scanf("%d",&x);

 printf("Enter the elements \n");
 for(i=0; i<size; i++)
 {
      scanf("%d",&arr[i]);
 }
 split(arr,0,size-1);
 printf("\n\tElements whose sum is %d\n\n",x);
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
 



void split(int arr[],int min,int max)
{
 int mid;
 if(min<max)
 {
   mid=(min+max)/2;
   split(arr,min,mid);
   split(arr,mid+1,max);
   merge(arr,min,mid,max);
 }
}


void merge(int arr[],int min,int mid,int max)
{
  int tmp[30];
  int i,j,k,m; 
  j=min;
  m=mid+1;
  for(i=min; j<=mid && m<=max ; i++)
  {
     if(arr[j]<=arr[m])
     {
         tmp[i]=arr[j];
         j++;
     }
     else
     {
         tmp[i]=arr[m];
         m++;
     }
  }
  if(j>mid)
  {
     for(k=m; k<=max; k++)
     {
         tmp[i]=arr[k];
         i++;
     }
  }
  else
  {
     for(k=j; k<=mid; k++)
     {
        tmp[i]=arr[k];
        i++;
     }
  }
  for(k=min; k<=max; k++)
     arr[k]=tmp[k];
}
