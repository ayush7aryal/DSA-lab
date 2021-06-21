#include<iostream>
#include"LinkedList.h"
#include "queue.h"

bool queue::isEmpty()
{
    return list.isEmpty();
}
void queue::enqueue(int data)
{
    list.addToHead(data);
}
void queue::dequeue()
{
    list.removeFromTail();
}

int queue::front()
{
    Node *temp = list.getHead();
    return temp->info;
    
}

int queue::rear()
{
    Node *temp = list.getTail();
    return temp->info;
    
}

void queue::printQueue()
{
    std::cout<<"The datas in the queue are:\n"<<std::endl;
    list.traverse();
}

