#include<stdio.h>

 struct sparse
 {int row;
  int column;
  int value;
   }s1[10];
 
 int sparse(int m[10][10],int r, int c)
 {int i,j,p=0;
  printf("For non-zero elements of matrix: ");
  printf("\n Row\tCol\tVal\n");
  for(i=0;i<r;i++)
     {for(j=0;j<c;j++)
        {if(m[i][j]!=0)
           {s1[p].row=i;
            s1[p].column=j;
            s1[p].value=m[i][j];
            printf("%d\t%d\t%d\t\n",s1[p].row,s1[p].column,s1[p].value);
             }
         p++;
         printf("\n");
        }
      }
 }

 int main()
 
 {int i,j,r,c,m[10][10];
 
  printf("Enter the no. of rows and columns: ");
  scanf("%d %d",&r,&c);
  printf("Enter the matrix elements: ");
  for(i=0;i<r;i++)
     {for(j=0;j<c;j++)
         scanf("%d",&m[i][j]);
       }
  printf("The matrix elements are: ");
  for(i=0;i<r;i++)
     {printf("\n");
      for(j=0;j<c;j++)
          printf("%d \t",m[i][j]);
      printf("\n");
       }
  sparse(m,r,c);
}

 
