#include "MyList.h"
#include "MyListVector.h"
#include <iostream>

using namespace std; 
//implmentation file

MyList::MyList() {}
MyList::~MyList() {}

void MyList::print() {
    cout << "MyList: " << size() << endl;
    for (int i=0; i< size(); i++) {
        cout << getElement(i)<< endl;
    }
}

void MyList::computeNextFib() {
    //include int getElement(int index), int size(), void insertNumberAtEnd(int n)
    if (size()<2) {
        insertNumberAtEnd(1);
    }
    else {
        int secondLastIndex = size()-2;
        int lastIndex = size()-1;
        int sum = getElement(secondLastIndex) + getElement(lastIndex);
        insertNumberAtEnd(sum);
    }
     
}
//int getElement(int index), int size(), void insertNumberAtEnd(int n)
void MyList::addToEnd(MyList &ml) {//ml is referenced

    for (int i=0; i < ml.size(); i++) {
        insertNumberAtEnd(ml.getElement(i));
    }
}