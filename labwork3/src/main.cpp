#include<iostream>
#include "linkedBST.h"
#include "arrayBST.h"

int main()
{
// LinkedBST implementation
std::cout<<"\nLinked BST implementation"<<std::endl;

 linkedBST * BST = new linkedBST();
      
std::cout<<BST->isempty()<<std::endl;
    BST->add( 5);
    std::cout<<BST->isempty()<<std::endl;
    BST->removeBST(BST->root, 1);
    BST->removeBST(BST->root, 5);
    BST->inorderTraversal(BST->root);
    BST->add(1);
    BST->add( 8);
    BST->add( 7);
    BST->add(5);
    BST->add(4);
    BST->exists( 1);
    BST->exists( 10);
    BST->inorderTraversal(BST->root);

// Array BST implementation
std::cout<<"\nArray BST implementation"<<std::endl;

    array_BST a;
     a.removeBST(1);
    std::cout<<a.isempty()<<std::endl;
    a.add(5); 
    std::cout<<a.isempty()<<std::endl;   
    std::cout<<a<<std::endl;
    a.add(20);
    std::cout<<a<<std::endl;
    a.add(2);
    std::cout<<a<<std::endl;
    a.removeBST(10);
    a.removeBST(2);
    std::cout<<a<<std::endl;
    a.add(3);
    a.add(4);
    a.add(2);
    a.add(6);
    a.add(9);
    std::cout<<a<<std::endl;
    a.exists(1);
    a.exists(5);
    
    a.min();
    a.max();
    std::cout<<a<<std::endl;
    a.min();
    a.add(100);
    a.removeBST(6);
   
    std::cout<<a<<std::endl;
    a.max();

}