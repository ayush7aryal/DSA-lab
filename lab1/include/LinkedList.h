#ifndef LINKEDLIST_H
#define LINKEDLIST_H


class Node
{
    public:
    int info;
    Node *next;

    // Node() : next(nullptr) {}
    // Node(int info, Node *next) : info(info), next(next) {}
};
    class LinkedList
    {
    private:
        Node *head;
        Node *tail;
    
    public: 
        LinkedList();
        bool isEmpty();
        void addToHead(int data);
        void traverse (char seperator =' ');
        void removeFromHead();
        void removeFromTail();
        void addToTail(int data);
        void add(int data, Node*pred);
        void remove (int data);
        bool search(int data);
        void retreive(int data, Node* &pointer);
        Node* getHead()
        {
            return head;
        }       

        Node* getTail()
        {
            return tail;
        }       

    };
#endif