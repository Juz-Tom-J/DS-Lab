#include <stdio.h>
int main()
{
  int arr[10],n,i,j,pos,temp,count=0,space;
  space = 4*(7+10);

  printf("Enter number of elements\n");
  scanf("%d",&n);
  count++;

  printf("Enter %d integers\n",n);

  for (i=0;i<n;i++)
    {scanf("%d",&arr[i]);
     count++;}

  for (i=0;i<(n-1);i++)
  {
    pos = i;

    for (j=i+1;j<n;j++)
    {
      if (arr[pos]>arr[j])
        {pos = j;
         count++;}
     count++;
     }
    if (pos!= i)
    {
      temp = arr[i];
      arr[i] = arr[pos];
      arr[pos] = temp;
      count+=3;
    }
     count++;
  }

  printf("Sorted list in ascending order:\n");

  for (i=0;i< n;i++)
    {printf("%d\n",arr[i]);
     count++;}
  
  printf("\nTime Complexity: %d\n", count);
  printf("\nSpace Complexity: %d\n", space);
  printf("\n");

}
