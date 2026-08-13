// Finding a common divisor//
#include<stdio.h>

#define MAX 100

int stack[MAX], top =-1;

void push(int value);
int pop();

void main()
{

int num1,i,div;

printf("Enter the number:");
scanf("%d",&num1);

for(i=2;i<=num1;i++)
{
    if (num1%i==o)
    {
        push(i);
    }
}
for (i=2;i<=num1;i++)
{
    if(num1%i==0)
    {
        div=pop();
    }
    print("\n Smallest common divisor is : %d",div);
}
void push(int value)
{
    if(top==MAX-1)
    {
        printf("\n stack overflow...");
    }
    else{
        top++;
        stack[top]=value;
    }
}
int pop()
{
    char val;
    if(top==-1)
    {
        printf("\n stack is underflow....");
        return -1;
    }
    else
    {
        val=stack[top];
        top--;
        return val;
    }
}
}
