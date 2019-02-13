//
//  testSSNSet.cpp
//  Homework1
//
//  Created by christopher kha on 1/20/19.
//  Copyright © 2019 christopher kha. All rights reserved.
//


#include "SSNSet.h"
#include <iostream>
using namespace std;

int main(){
    // SSNSet()
    SSNSet s;
    
    // add(),        size()
    assert(s.size() == 0);
    assert(s.add(1000) && s.size() == 1);
    assert(s.add(2000) && s.size() == 2);
    assert(s.add(3000) && s.size() == 3);
    assert(!s.add(1000) && s.size() == 3);
    
    s.print();
    
    cerr << "Passed all tests" << endl;
}

