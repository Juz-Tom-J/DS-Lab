#include <stdio.h>
#include <string.h>

#define SIZE 50

char s[SIZE];
int top= -1;

void push(char elem)
{
s[++top]=elem;
}

char pop()
{
return(s[top--]);
}

void display(int k, char p[])
{
for (int i=0; i <= top; i++)
printf("%c", s[i]);
printf("\n");
for (int i=0; i < k; i++)
printf("%c", p[i]);
}

int precedence(char elem)
{
switch(elem)
{
case '(': return 1;

case '+':

case '-': return 2;

case '*':

case '/':

case '%': return 3;

case '^': return 4;

default: return 0;
}
}

void convert(char infix[], char postfix[])
{
char ch;
int k=0;
push('\0');
for (int i=0; infix[i]; i++)
{
ch = infix[i];
switch(ch)
{

case '(':
push(ch);
break;

case ')':
while((ch = pop()) != '(')
{
postfix[k++] = ch;
}
break;

case '+':
case '-':
case '/':
case '*':
case '%':
case '^':
while(precedence(ch) <= precedence(s[top]))
{
postfix[k++]=pop();
}
push(ch);
break;

default:
postfix[k++]=ch;
}
}

while((postfix[k++] = pop()) != '\0');
}

int main()
{
char infix[100];
char postfix[100];

printf("Enter the Infix Expression: ");
gets(infix);

convert(infix, postfix);

printf("Postfix Expn: %s\n", postfix);
}
