#include <stdio.h>
#include <malloc.h>
#include "new.h"
int main()
{
int val,choice;
int top=-1;
int *stack;
stack=(int*)malloc(MAX*sizeof(int));
do {
printf("\n 1. PUSH");
printf("\n 2. PEEK");
printf("\n 3. POP");
printf("\n 4. DISPLAY");
printf("\n 5. EXIT");
printf("\n Enter your option : ");
scanf("%d", &choice);
switch(choice)
{
case 1:
printf("\n Enter the number to be pushed on stack : ");
scanf("%d",&val);
push(stack, val);
break;
case 2:
val = peek(stack);
if(val != -1)
printf("\n The value stored at top of stack is %d", val);
break;
case 3:
pop();
break;
case 4:
display(stack);
break;
}
} while(choice != 5);
return 0;
}


