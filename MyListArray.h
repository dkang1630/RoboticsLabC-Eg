#ifndef MY_LIST_ARRAY_H
#define MY_LIST_ARRAY_H

#include "MyList.h"
//Child Class
//header's file
class MyListArray : public MyList {

public: 
    MyListArray();
    ~MyListArray();

    void insertNumberAtEnd(int n);
    void removeBack();
    void clear();
    
    int getElement(int index);
    int size();

protected:
    int _maxSize = 1; //how long the max array
    int _size = 0; //how long the current array
    int *arrayPtr; //just declaring ptr variable 
};

#endif // what is this?