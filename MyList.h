#ifndef MY_LIST_H
#define MY_LIST_H

#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
//Parent (abstract) Class
//header's file 
class MyList {

public:
    //construct and initalize to store list of integers 
    MyList();
    //deconstruct
    ~MyList();

    virtual void insertNumberAtEnd(int n) = 0;
    virtual void removeBack() = 0;
    virtual void clear() = 0;
    
    void print();
    virtual int getElement(int index) = 0;
    virtual int size() = 0;
    void computeNextFib();
    void addToEnd(MyList &ml);
};


#endif // what is this?