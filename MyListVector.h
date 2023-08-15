#ifndef MY_LIST_VECTOR_H
#define MY_LIST_VECTOR_H

#include "MyList.h"
//Child Class
//header's file
class MyListVector : public MyList {
public: 
    MyListVector();
    ~MyListVector();

    void insertNumberAtEnd(int n);
    void removeBack();
    void clear();
    
    int getElement(int index);
    int size();
protected:
    vector <int> vecdata;
};

#endif // what is this?