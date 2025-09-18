#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int value;
    Node* next;
    
}Node;
Node* first = NULL;
Node* push(int value);
void printFunc();
int main()
{
    first=push(10);
    first=push(20);
    first=push(30);
    printFunc();
    return 0;
}
Node* push(int value)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->value = value;
    if (first == NULL)
    {
        first = node;
        node->next = NULL;
    }
    else
    {
        node->next = first;
        first = node;
    }
    return first;
}
void printFunc()
{
    Node* temp = first;
    while(temp != NULL)
    {
        printf("%d ",temp->value);
        temp = temp -> next;
    }
}