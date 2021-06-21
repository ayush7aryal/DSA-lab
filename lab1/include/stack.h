#pragma once
#include "LinkedList.h"

class stack
{
    private: 
        LinkedList list;

public:
    virtual bool isEmpty();
    virtual void push(int data);
    virtual void pop();
    virtual int top();
    virtual void printStack();

};