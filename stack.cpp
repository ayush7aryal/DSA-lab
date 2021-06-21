#include <iostream>
class Stack
{
public:
 virtual ~Stack() {}
 virtual bool isEmpty() const = 0;
 virtual bool isFull() const = 0;
 virtual bool push(const int element) {
 if(!isFull()) {
 return _push(element);
 } else {
 return false;
 }
 };
 virtual bool _push(const int element);