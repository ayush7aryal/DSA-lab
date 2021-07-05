#pragma once
#include<iostream>

#define size 10
template <typename t>
class Stack
{
    public:
    Stack(int topIndex = -1)
        :topIndex(topIndex){}

    virtual void isEmpty();
    virtual void isFull();
    void push(t data);
    virtual void pop();
    virtual void top();
    private:
    
    int topIndex;
    t array[size];
};


template <typename t>
void Stack<t>::isFull()
{
    if(topIndex ==size-1)
    {
        std::cout<<"The stack is full"<<std::endl;
    }
    else
    {
        std::cout<<"The stack is not full"<<std::endl;
    
    }

    
}
template <typename t>
void Stack <t>::push(t data)
{
    if (topIndex==size-1)
    {
        std::cout<<"Stack Overflow"<<std::endl;
    }
    else
    {
        topIndex++;
        array[topIndex] = data;
         std::cout<<array[topIndex]<<" is added to the stack"<<std::endl;

    }
}

template<typename t>
  void Stack <t> ::isEmpty()
{
    if(topIndex==-1)
    {
        std::cout<<"The stack is empty"<<std::endl;
    } 
    else
    {
        std::cout<<"The stack is not empty"<<std::endl;
    }
}

template <typename t>
void Stack<t>::pop()
{
    if(topIndex==-1)
    {
        std::cout<<"Stack Underflow"<<std::endl;
    }
    else
    {
        std::cout<<array[topIndex]<<" is removed form the stack"<<std::endl;
        topIndex--;

    }
}
template <typename t>
void Stack <t>::top()
{
    if(topIndex==-1)
    {
        std::cout<<"Stack Undeflow"<<std::endl;
    }
    else
    {
        std::cout<<array[topIndex]<<"is the top data in the stack"<<std::endl;
    }
}
