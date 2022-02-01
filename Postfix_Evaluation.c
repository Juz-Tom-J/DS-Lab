#include<stdio.h>
#define STACK_MAX 100

int arr[STACK_MAX];
int top=-1;

void push(int element)
{
     if(top>STACK_MAX-1){
        printf("Stack Overflow");
        return;
     }

     else
     {top++;
      arr[top]=element;}
}
int pop()
{
      if(top==-1)
      {
        printf("Stack Underflow");
        return 0;
      }
     else
      {
        int element;
        element=arr[top];
        top--;
        return (element);
      }
}

int main()
{
    char postfix[STACK_MAX];
    int i,a,b,res,num;

    printf("Enter the postfix expression:");
    scanf("%s",postfix);

    for(i=0;postfix[i]!='\0';i++)
     {
         switch(postfix[i])
          {
                  case'+':a=pop();
                          b=pop();
                          res=a+b;
                          push(res);
                          break;

                  case'-':a=pop();
                          b=pop();
                          res=a-b;
                          push(res);
                          break;

                  case'*':a=pop();
                          b=pop();
                          res=a*b;
                          push(res);
                          break;

                  case'/':a=pop();
                          b=pop();
                          res=a/b;
                          push(res);
                          break;

                 default:
                         printf("Enter the value of %c:",postfix[i]);
                         scanf("%d",&num);
                         push(num);
                         break;
             }
      }
printf(" The postfix expression is: %s\n",postfix);
printf(" Result after evaluation is :%d",arr[top]);
}
 
