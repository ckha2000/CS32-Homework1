//
//  Set.cpp
//  Homework1
//
//  Created by christopher kha on 1/17/19.
//  Copyright © 2019 christopher kha. All rights reserved.
//

#include "Set.h"
#include <iostream>
using namespace std;

Set::Set(){
    m_nItems = 0;
}

bool Set::empty() const{
    return (m_nItems == 0);
}

int Set::size() const{
    return m_nItems;
}

bool Set::insert(const ItemType& value){
    if(this->contains(value) || m_nItems == DEFAULT_MAX_ITEMS)
        return false;
    
    for(int i = 0; i < m_nItems; i++){
        if(value < m_arr[i]){
            for(int k = m_nItems; k > i; k--){
                m_arr[k] = m_arr[k-1];      // shift over items to the right of i
            }
            m_arr[i] = value;
            m_nItems++;
            return true;
        }
    }
    m_arr[m_nItems] = value;            // if value is greater than every item in the Set
    m_nItems++;
    return true;
}

bool Set::erase(const ItemType& value){
    if(!this->contains(value))
        return false;
    
    int i;
    for(i = 0; i < m_nItems; i++){
        if(m_arr[i] == value){
            break;
        }
    }
    for(; i < m_nItems - 1; i++){
        m_arr[i] = m_arr[i+1];
    }
    m_nItems--;
    
    return true;
}

bool Set::contains(const ItemType& value) const{
    for(int i = 0; i < m_nItems; i++){
        if(m_arr[i] == value)
            return true;
    }
    return false;
}

bool Set::get(int i, ItemType& value) const{
    if(i >= m_nItems || i < 0)
        return false;
    
    value = m_arr[i];
    
    return true;
}

void Set::swap(Set& other){
    if(this == &other)
        return;
    
    Set temp = other;
    other = *this;
    *this = temp;
}

//////////////////////
void Set::dump() const{
    for(int i = 0; i < m_nItems; i++){
        cerr << m_arr[i] << endl;
    }
    cerr << m_nItems << endl;
}

