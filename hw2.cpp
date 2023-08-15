//main file
#include <iostream>
#include "MyListVector.h"
#include "MyListArray.h"
#include "MyList.h"

using namespace std;


int main(int argc, char **argv) {
    MyList *mylist;
    MyList *mylist2;
    MyList *mylist3; //create stack pointer 

    MyListVector myVector;
    MyListVector myVector2;
    MyListArray *myArray = new MyListArray(); //stack pointer point to the heap object (you need a pointer to point to heap object)

    mylist3 = myArray; //stack pointer mylist3 needs to save an address. "myArray" is just an pointer variable that is storing an address. 
    mylist = &myVector; 
    mylist2 = &myVector2;

    for (int i=0; i<9; i++) {
        mylist->computeNextFib();
    }
    cout << "list of mylist" << endl;
    mylist->print();

    mylist->insertNumberAtEnd(4);
    mylist2->insertNumberAtEnd(5);
    cout << "list of mylist2" << endl;
    mylist2->clear();
    mylist2->print();

    mylist->addToEnd(*mylist3);
    cout << "list of mylist" << endl;
    mylist->print();

    mylist3->insertNumberAtEnd(5);
    mylist3->insertNumberAtEnd(5);
    mylist3->insertNumberAtEnd(5);
    for (int i=0; i<5; i++) {
        mylist3->computeNextFib();
        mylist3->insertNumberAtEnd(i);
    }
    cout << "list of mylist3" << endl;
    mylist3->print();
    // mylist3->clear();
    // cout << "list of mylist3" << endl;
    // mylist3->print();

    //I need to delete the heap space of mylist3




    

    return 0;
}
