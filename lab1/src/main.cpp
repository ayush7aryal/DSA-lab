#include "LinkedList.h"
using namespace std;
# include <iostream>
#include"stack.h"
#include "queue.h"

int main()
{
    LinkedList list;

    std::cout<<"addToHead, removeFromHead and traverse implementation"<< std::endl;
    list.addToHead(1);
    list.addToHead(2);
    list.addToHead(3);
    std::cout<<"Adding to head"<< std::endl;
    list.addToHead(4);

    list.traverse();
    list.removeFromHead();
    std::cout<<"Removing From head"<<std::endl;

    list.traverse();
    list.addToTail(9);
    std::cout<<"Adding to tail"<<std::endl;
    list.traverse(',');

    list.removeFromHead();
    std::cout<<"Removing from head"<< std::endl;
    list.removeFromHead();
    std::cout<<"Removing from head"<< std::endl;
    list.traverse();
    list.addToHead(8);
    std::cout<<"Adding to head"<< std::endl;
    list.removeFromTail();
    std::cout<<"Removing from Tail"<< std::endl;
    list.traverse();
    list.addToTail(6);
    std::cout<<"Adding to tail"<<std::endl;
    
    std::cout<<"Searching data , removing data from the list implementation"<< std::endl;
    Node *ptrr = nullptr;
    list.traverse();
    list.search(67) ? std:: cout << "Value found in the list\n" : std::cout <<"Value not found in the list\n";

    list.addToHead(4);
    std::cout<<"Adding to head\n";
    
    list.traverse();
    list.remove(8); 
    list.traverse();

    std::cout<<"Retreiving data and adding the data after a predecessor node implementation"<< std::endl;
    list.retreive(4, ptrr);
    list.add(99,ptrr);
    list.traverse();

std::cout<<"Stack Implementation"<< std::endl;
stack stack;

stack.push(7);
std::cout<<"Data has been pushed to stack\n";
stack.printStack();
stack.push(6);
std::cout<<"\nData has been pushed to stack";
stack.push(9);
std::cout<<"Data has been pushed to stack\n";
stack.printStack();
stack.pop();
std::cout<<"Data has been popped from the stack";
stack.printStack();

std::cout<<"\nThe top data in the stack is "<<std::endl;
std::cout<<stack.top();


std::cout<<"\nQueue Implementation"<<std::endl;
queue q;

q.enqueue(5);
std::cout<<"Enqueuing the data";
q.enqueue(7);
q.isEmpty()? std::cout<<"\nQueue is empty" : std::cout<<"\nThe queue is not empty"<<std::endl;
q.printQueue();
q.enqueue(8);
std::cout<<"Enqueuing the data\n";
std::cout<<"The rear data is"<<q.rear() <<std::endl;

std::cout<<"The front data is " <<q.front()<<std::endl;

q.printQueue();
q.dequeue();
std::cout<<"Dequeuing the data\n";
q.printQueue();
}
