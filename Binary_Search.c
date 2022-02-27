#include<stdio.h>

int main()

{int arr[10],i,n,first,last,middle,search,option,count=0,space;
 count++;

 printf("Enter the limit of the array: ");
 scanf("%d",&n);
 count++;
 
 printf("Enter the array elements: ");
 for(i=0;i<n;i++)
 {scanf("%d",&arr[i]);
  count++;}
 
 printf("The array elements are: ");
 for(i=0;i<n;i++)
 printf("%d ",arr[i]);
 
 do
 {
  first=0;
  last=n-1;
  count+=2;
  middle=(first+last)/2;
  count++;

  printf("\n Enter the element to be searched: ");
  scanf("%d",&search);
  count++;
 
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
    count++;
       }

 if(first>last)
   printf("%d not found in array list",search);
   count++;
   printf("\n Do you wish to continue Y(1) or N(0)");
   scanf("%d",&option);
   count++;
   }while(option==1);
 printf("Time complexity is %d\n",count);
 space = 9*sizeof(int)+10*sizeof(int);
 printf("Space complexity is %d\n",space);
 }
