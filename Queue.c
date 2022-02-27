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

void dequeue() {
  if (front == -1)
    printf("\nQueue is Empty!!\n");
  else {
    printf("\nDeleted -> %d\n", items[front]);
    front++;
    if (front > rear)
      front = rear = -1;
  }
}
void display() {
  if (rear == -1)
    printf("\nQueue is Empty!!!");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", items[i]);
  }
  printf("\n");
}
int main()
{
    printf("QUEUE IMPLEMENTATION USING ARRAY\n");
    int ch=0;
  do
   {
     printf("\n1:ENQUEUE\n2:DEQUEUE\n3:DISPLAY\n4:EXIT\n");
     printf("Enter your choice:");
     scanf("%d",&ch);
     switch(ch)
      {
        case 1:enqueue();
               break;
        case 2:dequeue();
               break;
        case 3:display();
               break;
        case 4:break;
      }
   }while(ch!=4);
}
