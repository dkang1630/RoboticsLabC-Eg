#include "MyListVector.h"
#include <iostream>
#include <vector>

using namespace std; 
//implmentation file

MyListVector::MyListVector() {}
MyListVector::~MyListVector() {} 

void MyListVector::insertNumberAtEnd(int n) {
    vecdata.push_back(n);
}

void MyListVector::removeBack() {
    vecdata.pop_back();
}

int MyListVector::getElement(int index) {
    return vecdata[index];
}

void MyListVector::clear () {
    vecdata.clear();
}

int MyListVector::size() {
    return vecdata.size();
}
