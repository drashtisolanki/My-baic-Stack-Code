#include <stdio.h>
#define SIZE 100
int stack[SIZE];
int top = -1;
//push operation
void push(int value)
{
  if(top == SIZE -1)//5-1=4 index numbers
  {
    printf("Stack Overflow!cannot push element.\n");
  }
  else
  {
    top++;
    stack[top] = value;
    printf("%d pushed to stack \n",value);
  }
}
//pop operation
void pop()
{
  int value;
  if(top == -1)
  {
    printf("Stack underflow! Cannot pop element.\n");
  }
  else
  {
    printf("%d popped from stack\n",stack[top]);
    top--;
  }
}
//peak(search) operation
void peek()
{
  if(top == -1)
  {
    printf("no element found!");
  }
  else
  {
    printf("Top element is %d\n",stack[top]);
  }
}
// isFull check
int isFull() {
    return top == SIZE - 1;
}

// isEmpty check
int isEmpty() {
    return top == -1;
}
//Display 
int Display(){
  if(top==-1)
  {
    return 0;
  }
  else
  {
    int i;
    for(i=0;i<=top;i++)
    printf("%d ",stack[i]);
  }
  printf("\n");
}
int main()
{
  int choice, value;
  while(1)
  {
     if(scanf("%d", &choice) != 1) 
     {
       break;
     }
  switch(choice)
  {
    case 1:
    scanf("%d",&value);
    push(value);
    break;
    case 2:
    pop();
    break;
    case 3:
    peek();
    break;
    case 4:
    if(isFull())
    {
      printf("stack is full.\n");
    }
    else
    {
      printf("stack is not full.\n");
    }
    break;
    case 5:
   if(isEmpty())
    {
      printf("stack is empty.\n");
    }
    else
    {
      printf("stack is not empty.\n");
    }
    break;
    case 6:
    Display();
    break;
    case 7:
    printf("Existing...\n");
    break;
    default:
    printf("Invalid choice!\n");
    break;
  }
  }
  printf("Existing...\n");
  return 0;
}