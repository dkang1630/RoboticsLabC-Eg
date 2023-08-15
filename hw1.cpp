#include <iostream>
#include <vector>
using namespace std;

// vector<int> m_vct[];
// int printVector(m_vct);

int main(int argc, char **argv) {
//Problem 2
    for (int i = 1; i<6; i++) {
        cout << "\n" << i << " - ";
        

        for (int j = 1; j<=i; j++) {
            cout << " " <<  j << " ";
        }
        
    }

cout<< "\n" << endl;

//Prpblem 3
    for (int i = 1; i<6; i++) {

        cout << "\n" << i << " - ";
            
        if (i%2==0){

            for (int j = 1; j<=i; j++) {

            cout << " " <<  j << " ";

            }    
        }    
    }

cout<< "\n" << endl;

//Problem 4
    vector<int> m_vct;

    for (int i=0; i<10; i++) {

        m_vct.push_back(i);
        cout << m_vct[i] << endl;
    } 

    // vector<int> printVector(m_vct) {

    //     cout << m_vct[i] << endl;
    // }

    // printVector(m_vct);
    m_vct.erase(m_vct.begin());
    m_vct.erase(m_vct.begin()+2);
    cout << "\n" << endl;
    for (int i=0; i<8; i++) {

        m_vct.push_back(i);
        cout << m_vct[i] << endl;
    } 
cout<< "\n" << endl;
//Problem 5
    int n=0;
    m_vct.clear();
    while (n<10) {
        n++;
        if (m_vct.size() < 2) {
            m_vct.push_back(1);
        }
        // else {
        //     int b = m_vct.begin() + n - 2 + m_vct.begin() + n - 1;
        //     m_vct.push_back(b);
        // }
    }

    for (int i=0; i<9; i++) {

        cout << m_vct[i] << endl;
    } 

    



    return 0;
}