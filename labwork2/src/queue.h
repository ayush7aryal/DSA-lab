#pragma once
#include<iostream>
using namespace std;
#define size 10
 template <typename t>
class queue
{
    private:
    t array[size];
    int front, rear;
    public:
    queue(int front = -1, int rear = -1):front(front),rear(rear){};

    virtual bool isEmpty();
    virtual bool isFull();
    virtual void enqueue(t data);
    virtual void dequeue();
    virtual void frontData();
    virtual void rearData();
};

template <typename t>
bool queue<t>::isEmpty()
{
    return front==rear;
}

template <typename t>
bool queue<t>::isFull(){
    return  rear == size-1;
}

template <typename t>
void queue<t>::enqueue(t data)
{
   if(!isFull())
   {
    if(isEmpty())
    {
       front=0;
    }   
       rear++;
       array[rear]=data;
       std::cout<<data<<" is added to the queue"<<std::endl; 
   }
   else{
    std::cout << "Queue Overflow" ;
  }
}    

template <typename t>
void queue<t>::dequeue()
{
    if(!isEmpty())
    {
        
        cout<<array[front]<<" has been removed from the queue"<<endl;
        front++;
        
    }
    else
    {
        cout<<"queue underflow"<<endl;
    }
}

template <typename t>
void queue <t>::frontData()
{
    cout<<array[front]<<" is the front data of the queue" <<endl;   
}

template <typename t>
void queue <t>::rearData()
{
    cout<<array[rear]<<" is the rear data of the queue" <<endl;    
}