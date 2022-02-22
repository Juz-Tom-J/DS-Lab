#include<stdio.h>

int main()

{int arr[10],i,n,first,last,middle,search,option;

 printf("Enter the limit of the array: ");
 scanf("%d",&n);
 
 printf("Enter the array elements: ");
 for(i=0;i<n;i++)
 scanf("%d",&arr[i]);
 
 printf("The array elements are: ");
 for(i=0;i<n;i++)
 printf("%d ",arr[i]);
 
 do
 {
  first=0;
  last=n-1;
  middle=(first+last)/2;

  printf("\n Enter the element to be searched: ");
  scanf("%d",&search);
 
  while(first<=last)
   
    {if(arr[middle]<search)
       first=middle+1;
   
     else if(arr[middle]==search)
           {printf("%d found at location = %d",search,middle+1);
            break;
              }
   
     else
         last=middle-1;
     
    middle=(first+last)/2;
       }

 if(first>last)
   printf("%d not found in array list",search);
   printf("\n Do you wish to continue Y(1) or N(0)");
   scanf("%d",&option);
   }while(option==1);

 }
