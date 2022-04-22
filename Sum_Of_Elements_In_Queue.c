#include <stdio.h>
int items[100], front = -1, rear = -1,SIZE=10;

void enqueue() {
    int value;
    printf("\nEnter the element to store:");
    scanf("%d",&value);
  if (rear == SIZE - 1)
    printf("\nQueue is Full!!\n");
  else {
    if (front == -1)
      front = 0;
    rear++;
    items[rear] = value;
    printf("Inserted -> %d\n", value);
  }
}

void sum()
{int i,sum=0;
 for(i=0;i<SIZE;i++)
  sum+=items[i];
 printf("Sum: %d",sum);
 }

int main()
{
    printf("SUM OF EVEN ARRAY ELEMENTS\n");
    int ch=0;
  do
   {
     printf("\n1:ENQUEUE\n2:SUM\n3:EXIT\n");
     printf("Enter your choice:");
     scanf("%d",&ch);
     switch(ch)
      {
        case 1:enqueue();
               break;
        case 2:sum();
               break;
        case 3:break;
      }
   }while(ch!=3);
}
