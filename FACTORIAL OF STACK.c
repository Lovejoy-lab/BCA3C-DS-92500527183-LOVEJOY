/* FACTORIAL USING STACK*/
#include<stdio.h>


int stack[MAX],top=-1;
void push(int ch);
int pop();

void main()
{
    int i=0,n,fact=1;
    printf("\n Enter Value :");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        push(i);
    }
    while(top!=-1)
    {
        fact=fact*pop();
    }
    printf("\n Factorial is : %d",fact);
}
void push(int value)
{
    if(top==MAX-1)
    {
        printf("\n stack is overflow...");
        return -1;
    }
    else
    {
        printf("\n stack is underflow...");
        top++;
        stack[top]=value;
    }
}
int pop()
{
    int val;
    if(top==-1)
    {
        printf("\n stack is underflow...");
        return -1;
    }
    else
    {
        val=satck[top];
        top--;
        return val;
    }
}

