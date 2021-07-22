#include <iostream>

#include "arrayBST.h"

bool array_BST::isempty()
{
   return array_tree[1] == 0;
}

void array_BST::add(int key)
{
   int index = 1;

   if (isempty())
   {
      array_tree[index] = key;
      return;
   }

   else
   {
      while(index < array_size)
      {
         if(array_tree[index]!=0 && array_tree[index]<key)
         {
            index = index *2 + 1;
         }
         else if(array_tree[index]!=0 && array_tree[index]>key)
         {
            index = index * 2;
         }
         else
         {
            array_tree[index]=key;
            return;
         }
      }
   }
}

std::ostream &operator<<(std::ostream &output, array_BST &obj)
{

   for (int i = 1; i < obj.array_size; i++)
   {

      output << obj.array_tree[i] << " ";
   }

   return output;
}

void array_BST::removeBST(int key)
{

   if (isempty())
   {
      std::cout << "BST is empty to remove" << std::endl;
   }

   removed(1, key);
}

int array_BST::max()
{

   if (isempty())
   {
      std::cout << "The tree is empty " << std::endl;
   }
   else
   {
      std::cout<<"The maximum value is:";
      std::cout << getmax(1) << std::endl;
   }
   return 0;
}

int array_BST::min()
{

   if (isempty())
   {
      std::cout << "The tree is empty " << std::endl;
   }
   else
   {
      std::cout<<"The minimum value is:";
      std::cout << getmin(1) << std::endl;
   }
   return 0;
}

void array_BST::exists(int key)

{
   int i = 1;

   while (i < array_size)
   {
      if (array_tree[i] == 0)
      {
         break;
      }
      else if (array_tree[i] == key)
      {
         std::cout << "The key "<<key<<" exists and is  at index " << i << std::endl;
         return;
      }
      else if (array_tree[i] < key)
      {
         i = 2 * i + 1;
      }
      else
      {
         i = 2 * i;
      }
   }
   std::cout << "The key "<<key<<" don't exists" << std::endl;
}

int array_BST::getmax(int index)
{
   

   if (!isempty())
   {
       
      while (index < array_size)
      {
         if ((2*index+1) <array_size && array_tree[2 * index + 1] != 0)
         {
            index = index*2 +1;
         }
         else
         {
            break;
         }
      }
      return array_tree[index];
   }
   return 0;
}

int array_BST::getmin(int index)
{
   if(!isempty()){
      while (index < array_size)
      {
         if ((index * 2) < array_size && array_tree[(index * 2)] != 0)
         {
            index = index*2;
         }
         else
         {
            break;
         }
      }
      return array_tree[index];
   }
   return 0;
}

void array_BST::removed(int index, int key)
{
   while((array_tree[index]!=key) && (array_tree[index] != 0)){
        if(key < array_tree[index]){
        	index = 2 * index;
		}
        else{
        	index = 2 * index + 1;
		}
	}
	if(array_tree[index]!=0){
		if(array_tree[2*index]==0 && array_tree[2*index+1]==0){
			array_tree[index]=0;
		}
		else if(array_tree[2*index]==0 || array_tree[2*index+1]==0){
			if(array_tree[2*index+1]==0){
			   array_tree[index]=array_tree[2*index];
			}
			else{
				array_tree[index]=array_tree[2*index+1];
			}
		}
		else{
			int temp=array_tree[index];
			int m=getmax(2*index);
			array_tree[index]=m;
			removed(2*index,m);
		}
	}
}
