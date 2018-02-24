/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PetDatabaseSearchableByType.h
 * Author: Rohit
 *
 * Created on February 23, 2018, 7:48 PM
 */

#ifndef PETDATABASESEARCHABLEBYTYPE_H
#define PETDATABASESEARCHABLEBYTYPE_H

#include "Pet.h"
#include "PetDatabaseSearchable.h"
#include "PetDatabaseSortableByType.h"
#include "BubbleSortIncreasing.h"

class PetDatabaseSearchableByType:public PetDatabaseSearchable{
public:
    // constructor
    PetDatabaseSearchableByType(PetDatabaseSortableByType* pdsbt){
        BubbleSortIncreasing bs;
        bs.sort(pdsbt);
        _petVec = pdsbt->getVector();
    }
    // set Query function
    void setQuery(string str){
        _query = str;
    }
    // get pet function to display the pet
    Pet* getPet(int i){
        return _petVec[i];
    }
protected:
    // variable to store the query
    string _query;
    // vector to store the ascending order sorted vector
    vector<Pet*> _petVec;
    // setQuery function
    
    // getSize function
    virtual unsigned int getSize() const{
        return _petVec.size();
    }
    // compareAt function
    virtual string compareAt(int i){
        string compareReturn;
        if (_petVec[i]->GetType() == _query){
            compareReturn = "middle";
            return compareReturn;
        }
        else if (_petVec[i]->GetType() > _query){
            compareReturn = "greater";
            return compareReturn;
        }
        else{
            compareReturn = "less";
            return compareReturn;
        }
    }   
};

#endif /* PETDATABASESEARCHABLEBYTYPE_H */

