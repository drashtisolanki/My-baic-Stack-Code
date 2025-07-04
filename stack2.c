#include <stdio.h>
#define SIZE 5
int stack[SIZE];
int top = -1;
//push operation
void push(int value)
{
  if(top == SIZE -1)//5-1=4 index numbers
  {
    printf("Stack overflow! Cannot push %d\n",value);
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
// Check if stack is empty
void isEmpty() {
    if (top == -1) 
    {
        printf("The stack is empty.\n");
    } 
    else 
    {
        printf("The stack is not empty. Current size: %d\n",SIZE);
    }
}

// Check if stack is full
void isFull() {
    if (top == SIZE - 1) {
        printf("The stack is full.\n");
    } else {
        printf("The stack is not full. Remaining capacity: %d\n",SIZE);
    }
}

// Get current size of stack
void size() {
    printf("Current size of stack: %d\n", top + 1);
}

// Main function to process commands
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
    case 0:
    printf("Invalid choice! Please try again.\n");
    break;
    case 1:
    scanf("%d",&value);
    push(value);
    break;
    case 2:
    pop();
    break;
    case 3:
    isEmpty();
    break;
    case 4:
    isFull();
    break;
    case 5:
    size();
    break;
    default:
    printf("Invalid choice!\n");
    break;
  }
  }
  printf("Exiting...\n");
  return 0;
}