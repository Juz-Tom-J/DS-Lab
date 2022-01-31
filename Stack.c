#include <stdio.h>
#define LIMIT 100

int stack[LIMIT],top,i,choice;

void push();
void pop();
void display();

void push()
{
int element;
if(top == LIMIT- 1)
{
printf("Stack overflow\n");
}
else
{
printf("Enter the element to be inserted:");
scanf("%d", &element);
top++;
stack[top]=element;
}
}

void pop()
{
int element;
if(top == -1)
{
printf("Stack underflow\n");
}
else
{
element=stack[top];
printf("The deleted item is %d\n",stack[top]);
top--;
}
}
void display()
{
if(top == -1)
{
printf("Stack underflow\n");
}
else if(top > 0)
{
printf("The elements of the stack are:\n");
for(i = top; i >= 0; i--)
{
printf("%d\n",stack[i]);
}
}
}

int main()
{
printf ("STACK IMPLEMENTATION USING ARRAY\n\n");
top = -1;
do
{
printf("1.Push\n 2.Pop\n 3.Display\n 4.Exit\n\n");
printf("Enter your choice:");
scanf("%d",&choice);

switch(choice)
{
 case 1:
 push();
 break;

 case 2:
 pop();
 break;

 case 3:
 display();
 break;

 case 4:
 exit(0);
 break;

 default:
 printf("Sorry, invalid choice!\n");
 break;

}
} while(choice!=4);
return 0;
}

