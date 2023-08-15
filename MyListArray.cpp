#include "MyListArray.h"
#include <iostream>
#include "array"
#include <algorithm>

using namespace std; 
//implmentation file

MyListArray::MyListArray() {
    arrayPtr = new int[_maxSize];
}
MyListArray::~MyListArray() {
    delete[] arrayPtr;
}

void MyListArray::insertNumberAtEnd(int n) {
    if (_size < _maxSize) {
        arrayPtr[_size] = n;
        _size = _size + 1;
    }
    else {
        _maxSize = _size + 3;
        int *tempArray = new int [_maxSize];
        copy(arrayPtr, arrayPtr+_size+1, tempArray);
        tempArray[_size] = n;
        _size = _size + 1; 
        delete[] arrayPtr;
        arrayPtr = tempArray;  
    }
}

void MyListArray::removeBack() {
    _size = _size - 1;
}

int MyListArray::getElement(int index) {
    return arrayPtr[index];
    // *(arrayPtr + index) == arrayPtr[index] == index[arrayPtr] == *(index + arrayPtr)
}

void MyListArray::clear () {
    _size=0;
}

int MyListArray::size() {
    return _size; //(int) casting--treating it as an int in this scope 
}