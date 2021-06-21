#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList()
{
    head= nullptr;
    tail = nullptr;
}

bool LinkedList:: isEmpty()
{
    if (head == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void LinkedList:: addToHead(int data)
{
   Node *newNode = new Node  ;
   newNode -> info = data;
   newNode -> next = head;
   head = newNode;

    
if ( tail == nullptr)
{
    tail = head;
}

}

void LinkedList :: traverse (char seperator)
{
    if (this-> LinkedList:: isEmpty())
    {
    
        std::cout <<"List is empty"<< std::endl;
    }
    else
    {
          
        Node *temp = head;
        while(temp!= nullptr)
        {
            std::cout<< temp->info <<seperator;
            temp = temp->next;
            
        }
         std::cout << "\n"<< std :: endl;
    }
}

void LinkedList:: removeFromHead()
{
    if( this-> isEmpty())
    {
        std::cout<<"The list is empty"<<std::endl;
    }
    if( !this-> isEmpty())
    {
        Node *nodeToDelete= head;
        head = nodeToDelete->next;
        delete nodeToDelete;
        
    }
}

void LinkedList:: addToTail(int data)
{
    Node *newNode= new Node;
    newNode->info= data;
    newNode->next= NULL;
    tail->next= newNode;
    tail= tail->next;
}


void LinkedList:: removeFromTail()
{
    if( !this -> isEmpty() )
    {
        
        Node *nodeToDelete = new Node;

        nodeToDelete= tail;
        if(head==tail)
        {
            head = tail =NULL;
        }
        else
        {
            Node *pred= new Node;
            pred= head;

            while(pred->next!= tail)
            {
                pred = pred->next;

            }
        tail = pred;
        pred->next = NULL;   
        delete nodeToDelete; 
            
        }

    }
    else{
        std:: cout <<"List is empty" <<std::endl;
    }
}

 void LinkedList:: add(int data, Node *pred)
 {
     std::cout<<"Adding "<< data<<"after" <<pred->info<< std::endl;
     Node * newNode = new Node;
     newNode->info = data;
     newNode ->next = pred->next;
     pred->next = newNode;
 }

  void LinkedList::remove(int data)
{
      if( !this -> isEmpty() ){ 
       if (head->info == data)
      {
          LinkedList::removeFromHead();
          std::cout<<"Removing "<< data<< std::endl;
      }
        else{
        
            Node *nodeToRemove =  new Node; 
            nodeToRemove = head->next;
            Node *prev =new Node ;
            prev= head;
        
        
            while(nodeToRemove!= nullptr)
            {
            
                if(nodeToRemove-> info== data){
                
                    break;
                }
                else
                    {
                    prev = nodeToRemove;
                    nodeToRemove = nodeToRemove->next;
                    } 
            }
         prev->next =  nodeToRemove->next;
         delete nodeToRemove;
         std::cout<<"Removing "<< data<< std::endl;
    }
  }

    else
    {
        std::cout<<"List is empty"<<std::endl;
    }
}

    bool LinkedList:: search(int data)
    {
        Node * temp = head;
        while(temp != nullptr )
        {
            if (temp->info == data)
                return true;

           temp  = temp->next; 
        }
        return false;
    }

    void LinkedList:: retreive(int data, Node* &outputPtr)
    
    {
        Node *point = head;
        while( point != nullptr )
        {
            if(point->info == data)
            {
                outputPtr = point;
                break;

            }
            point = point->next;
            
        }
        std::cout<<" The "<< data<<"has been retreived"<<std::endl;
    }