#include<stdio.h>

 void linear_search(int arr[10], int m, int count)
 {int search_element,j,key,com,space;
  size_t a_size = sizeof(arr)/sizeof(arr[0]); 
  count++;
 
  do
  {printf("Enter element to be searched:\n");
   scanf("%d",&search_element);
   count++;
 
   for(j=0;j<m;j++)
      {key=0;
       if(arr[j]==search_element)
        {key=1;
         break;}
    count++;
    
     }
   if(key==1)
      printf("%d found at location=%d\n",search_element,j);
   else
      printf("Element not found in the array\n");
   count++;
   
   printf("Do you wish to continue? N(0) or Y(1)\n");
   scanf("%d",&com);
   count++;
   
    }while(com!=0);
    
    printf("Time complexity is: %d\n",count);
    space = 7*sizeof(int)+a_size;
    printf("Space complexity is: %d\n",space);
    
  }
 
 int main()

 {int array[10],n,i,count;
  count++;
 
  printf("Enter the array limit: \n");
  scanf("%d",&n);
  count++;
 
  printf("Enter the array element: \n");
  for(i=0;i<n;i++)
     scanf("%d",&array[i]);
     count++;
 
  printf("The array elements are: \n");
  for(i=0;i<n;i++)
     printf("%d ",array[i]);
     count++;
  printf("\n");
     
  linear_search(array,n,count);
   
    }



