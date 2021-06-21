#include<iostream>
#include "stack.h"
#include "LinkedList.h"

bool stack::isEmpty()
{
    return list.isEmpty();
}
void stack::push(int data)
{
    list.addToHead(data);
}

void stack::pop()
{
    list.removeFromHead();

} 

int stack::top()
{
   Node *temp = list.getHead();
   int data = temp->info;
   return data; 
}
void stack::printStack()
{
    std::cout <<"The datas in the stack are"<< std::endl;
    list.traverse(',');
}