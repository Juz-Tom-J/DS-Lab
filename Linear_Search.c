#include <stdio.h>
int main()
{
int array[10], search, c, n,space,count;
count++;
printf("Enter number of elements in array\n");
scanf("%d", &n);
count++;
printf("Enter %d integer(s)\n", n);
for (c = 0; c < n; c++)
     { scanf("%d", &array[c]);
       count++;}
printf("Enter a number to search\n");
scanf("%d", &search);
count++;
for (c = 0; c < n; c++)
{
if (array[c] == search)
{ printf("%d is present at location %d.\n", search, c+1);
  count++;
  break;}
}
if (c == n)
printf("%d isn't present in the array.\n", search);
count++;
space = 5*sizeof(int)+10*sizeof(int);
printf("Space complexity = %d\n",space);
printf("Time complexity = %d\n",count);
return 0;
}
