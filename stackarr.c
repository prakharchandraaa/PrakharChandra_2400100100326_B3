//develop a c program to implement a stack using array
#include<stdio.h>
# define max 5
typedef struct st
{
    int arr[max];
    int top;
} stack;
void initialize (stack *p);
void push (stack *p , int x);
int pop (stack *p);
int isempty (stack *p);
int isfull (stack *p);

void main()
{
    stack s;
    int ch, n;
    initialize (&s);
do
{
    printf("\n 1.PUSH");
    printf("\n 2.POP");
    printf("\n 3.EXIT");
    printf("\n ENTER CHOICE ");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1 :
        scanf("%d" , &n);
            push (&s,n);
        break;
        case 2 :
        n = pop(&s);
        if(n!=-1)
        printf("\n Popped numver is %d", n);
        break;
    }
} while(ch!=3);
}
void initialize(stack*p)
{
    p -> top = 0;
}
void push(stack *p, int x)
{
    int t;
    t= isfull(p);
    if(t==1)
    printf("\n STACK IS FULL");
    else
    {
        p -> arr[p -> top]= x;
        p -> top++;
    } 
}
int pop(stack *p)
{
  int t,c;
  t = isempty(p);
  if(t==1)
  {
    printf("\n STACK IS EMPTY");
    return -1;
  }  
  else
  {
    p -> top--;
    c = p -> arr[p -> top];
  }
  return (c);
}
int isempty (stack*p)
{
    if(p -> top == 0)
    return (1);
    else
    return(0);
}
int isfull(stack * p)
{
    if(p -> top == max -1)
    return (1);
    else
    return(0);
}

