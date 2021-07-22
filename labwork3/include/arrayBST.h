#pragma once
#include "interfaceclass.h"
#include <iostream>



class array_BST:public AbstractBST{

    private:
    
    int *array_tree;
    int array_size=20;

     int getmax(int index);
    int getmin(int index);
    void removed(int index,int key);

    public:

/* 0 cannot be used for this binary tree as 0 denotes, at the index is not  assignined with value*/
   array_BST(){
        array_tree = new int[array_size];
        for(int i=0; i<array_size; i++)
        {
            array_tree[i]=0;
        }
    } 

    bool isempty();
    void add(int key);
    friend std::ostream &operator<<(std::ostream& output, array_BST &obj);
    void removeBST(int key);
    int max();
    int min();
    void exists(int key);
   
};