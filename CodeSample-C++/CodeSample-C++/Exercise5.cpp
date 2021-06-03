//
//  Exercise5.cpp
//  CodeSample-C++
//
//  Created by Davoud on 4/6/21.
//
#include "Exercise5.hpp"
#include <iostream>
using namespace std;
void HanoiTower::tower(int a, char from, char buf, char to){
    if (a>0){
        if(a==1) {
            cout << "Move disc 1 from " << from<< " to "<< to << "\n";
            return;
        }
        else {
            tower(a-1, from, to, buf);
            cout << "Move disc " << a << " from "<< from << " to "<< to << "\n";
            tower(a-1, buf, from, to);
        }
    }
    else{
        cout<<"Error" << endl;
    }
}
