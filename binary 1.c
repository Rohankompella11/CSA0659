#include<stdio.h>
 void main()
 {
     int a[100],n,i,flag=0,last,mid,first,key,pos;
     printf("\n enter the number of elements :");
     scanf("%d",&n);
     printf("\n enter the numbers :");
     for (i=0;i<n;i++)
     scanf("%d",&a[i]);

     printf("\n enter key value :");
     scanf("%d",&key);
     first=0;
     last=n-1;
     while (first <= last)
     {
         mid=(first+last)/2;
         if (a[mid]==key)
         {
             pos=mid+1;
             flag=1;
             break;

         }
         else if(a[mid]>key)
         {
             last=mid -1;
         }
         else if(a[mid]<key)
         {
             first=mid+1;
         }
     }
     if(flag==1)
     printf("\n the key %d is present at the position of %d",key,pos);
     else
     printf("\n the key is not present at any position!!! ",key);
}
