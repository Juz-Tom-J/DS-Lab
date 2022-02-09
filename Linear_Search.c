#include<stdio.h>

 void linear_search(int arr[10], int m)
 {int search_element,j,key,com;
 
  do
  {printf("Enter element to be searched:\n");
   scanf("%d",&search_element);
 
   for(j=0;j<m;j++)
      {key=0;
       if(arr[j]==search_element)
        {key=1;
         break;}
     }
   if(key==1)
      printf("%d found at location=%d\n",search_element,j);
   else
      printf("Element not found in the array\n");
   
   printf("Do you wish to continue? N(0) or Y(1)\n");
   scanf("%d",&com);
   
    }while(com!=0);
  }
 
 int main()

 {int array[10],n,i;
 
  printf("Enter the array limit: \n");
  scanf("%d",&n);
 
  printf("Enter the array element: \n");
  for(i=0;i<n;i++)
     scanf("%d",&array[i]);
 
  printf("The array elements are: \n");
  for(i=0;i<n;i++)
     printf("%d\t",array[i]);

  linear_search(array,n);
   
    }



