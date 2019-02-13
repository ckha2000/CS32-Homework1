//
//  SSNSet.cpp
//  Homework1
//
//  Created by christopher kha on 1/18/19.
//  Copyright © 2019 christopher kha. All rights reserved.
//

#include "SSNSet.h"
#include <iostream>
using namespace std;

SSNSet::SSNSet(){}

bool SSNSet::add(unsigned long ssn){
    return m_set.insert(ssn);
}

int SSNSet::size() const{
    return m_set.size();
}

void SSNSet::print() const{
    for(int i = 0; i < size(); i++){
        unsigned long temp;
        m_set.get(i, temp);
        
        cout << temp << endl;
    }
}
