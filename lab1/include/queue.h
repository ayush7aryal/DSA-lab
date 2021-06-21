#pragma once
#include"LinkedList.h"

class queue
{
    private:
     LinkedList list;
public:

virtual bool isEmpty();
virtual void enqueue(int data);
virtual void dequeue();
virtual int front();
virtual int rear();
void printQueue();	

};