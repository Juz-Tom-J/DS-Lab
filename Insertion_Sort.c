#include <stdio.h>

int main()
{
  int n,array[10],i,j,temp,flag = 0;

  printf("Enter number of elements\n");
  scanf("%d",&n);

  printf("Enter %d integers\n",n);

  for (i=0;i<n;i++)
    scanf("%d",&array[i]);

  for (i=1 ;i<=(n-1);i++) {
    temp = array[i];

    for (j=i-1;j>=0;j--) {
      if (array[j]>temp) {
        array[j+1] = array[j];
        flag = 1;
      }
      else
        break;
    }
    if (flag)
      array[j+1] = temp;
  }

  printf("Sorted list in ascending order:\n");

  for (i=0;i<=(n-1);i++) {
    printf("%d\n", array[i]);
  }

  return 0;
}
