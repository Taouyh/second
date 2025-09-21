#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int* array;
    int capacity;
    int length;
}Stack;
void InitStack(Stack* stack,int capacity)
{
    stack = (Stack*)malloc(sizeof(stack));
    if (stack == NULL)
    {
        perror("Fail to allocate memory for the stack.");
        exit(0);
    }
    stack->array = (int*)malloc(capacity*sizeof(int));
    stack->capacity = capacity;
    stack->length = 0;
}
void push(Stack* stack,int value)
{
    if (stack == NULL)
    {
        perror("Fail to allocate memory for the stack.");
        exit(0);    
    }
    stack->array[stack->length++] = value;
}
int pop(Stack* stack)
{
    
}
int main()
{

    Stack* stack;
    InitStack(stack,10);
    push(stack,10);
    push(stack,20);
    push(stack,30);
    return 0;
}