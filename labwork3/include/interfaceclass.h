#pragma once

class AbstractBST

{
    public:
    virtual bool isempty()=0;
    virtual void add(int key)=0;
    virtual int max ()=0;
    virtual int min ()=0;
    virtual void exists (int key)=0;

};