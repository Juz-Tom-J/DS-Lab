#include <stdio.h>

int main()
{
  int arr[10],n,i,j,temp,space,count=0;
  space=4*(10+6);

  printf("Enter number of elements\n");
  scanf("%d",&n);
  count++;

  printf("Enter %d integers\n",n);

  for (i=0;i<n;i++)
    {scanf("%d", &arr[i]);
     count++;}

  for (i=0;i<(n-1);i++)
  {
    for (j=0;j<(n-i-1);j++)
    {
      if (arr[j]>arr[j+1])
      {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        count+=3;
      }
        count++;
    }
        count++;
  }

  printf("Sorted list in ascending order:\n");

  for (i=0;i< n;i++)
    {printf("%d\n",arr[i]);
     count++;}

  printf("\nSpace Complexity: %d", space);
  printf("\nTime Complexity: %d", count);

}
	
