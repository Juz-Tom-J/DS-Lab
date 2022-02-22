#include<stdio.h>

 struct poly
 {int coeff;
  int expo;
   }p1[30];

 int main()
 {int i,n;
 
  printf("Enter the degree of the polynomial: ");
  scanf("%d",&n);
 
  for(i=0;i<n;i++)
  {
   printf("Enter the coefficient of term: ");
   scanf("%d",&p1[i].coeff);
   
   printf("Enter the exponent of term: ");
   scanf("%d",&p1[i].expo);
    }
   
   printf("The polynomial is: ");
   for(i=0;i<n;i++)
   if(i<(n-1))
   printf("%dx^%d+",p1[i].coeff,p1[i].expo);
   else
   printf("%dx^%d",p1[i].coeff,p1[i].expo);
    }
