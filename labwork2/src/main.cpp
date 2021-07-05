#include<iostream>
#include"Stack.h"
#include"queue.h"
int main()
{
   std::cout<<"\n****Stack Implementation for integer****\n"<<std::endl;
   Stack<int> s; 
   s.push(5);
   s.push(6);
   s.pop();
   s.push(8);
   s.isEmpty();
   s.isFull();
   s.top();

   std::cout<<"\n****Stack Implementation for Character****\n"<<std::endl;

   Stack<char> c;
   c.push('a');
   c.push('b');
   c.pop();
   c.push('d');

std::cout<<"\n****Queue Implementation for integer****\n"<<std::endl;
queue<int> q;
q.enqueue(4);
q.enqueue(6);
q.enqueue(8);
q.dequeue();
q.enqueue(7);
q.enqueue(9);
q.frontData();
q.rearData();
q.dequeue();
q.frontData();

std::cout<<"\n****Queue Implementation for character****\n"<<std::endl;
queue<char> a;
a.enqueue('a');
a.enqueue('b');
a.enqueue('c');
a.dequeue();
a.enqueue('d');
a.enqueue('e');
a.frontData();
a.rearData();
a.dequeue();
a.frontData();
}

