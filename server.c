#include <stdio.h>
#include <malloc.h>
#include "new.h"

int push(int stack[], int val)
{
if(top == MAX-1)
{
printf("\n STACK OVERFLOW");
}
else {
top++;
stack[top] = val;
}
return 0;
}
int peek(int stack[])
{
if(top == -1)
{
printf("\n STACK IS EMPTY");
}
else
{
return (stack[top]);
}
}
int pop()
{
    if(top==-1)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        printf("\nDeleted element is %d",stack[top]);
        top=top-1;
    }
return 0;
}
int display(int stack[])
{
int i;
if(top == -1)
printf("\n STACK IS EMPTY");
else {
for(i = top;i >= 0;i--){
printf("\n%d",stack[i]);
}
}
return 0;
}
