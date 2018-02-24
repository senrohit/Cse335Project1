/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PetDatabaseSearchableByWeight.h
 * Author: Rohit
 *
 * Created on February 23, 2018, 7:48 PM
 */

#ifndef PETDATABASESEARCHABLEBYWEIGHT_H
#define PETDATABASESEARCHABLEBYWEIGHT_H

#include "Pet.h"
#include "PetDatabaseSearchable.h"
#include "PetDatabaseSortableByWeight.h"
#include "BubbleSortIncreasing.h"

class PetDatabaseSearchableByWeight:public PetDatabaseSearchable{
public:
    // constructor
    PetDatabaseSearchableByWeight(PetDatabaseSortableByWeight* pdsbw){
        BubbleSortIncreasing bs;
        bs.sort(pdsbw);
        _petVec = pdsbw->getVector();
    }
    // set Query function
    void setQuery(unsigned int i){
        _query = i;
    }
    // get pet function to display the pet
    Pet* getPet(int i){
        return _petVec[i];
    }
protected:
    // variable to store the query
    unsigned int _query;
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
        if (_petVec[i]->GetWeight() == _query){
            compareReturn = "middle";
            return compareReturn;
        }
        else if (_petVec[i]->GetWeight() > _query){
            compareReturn = "greater";
            return compareReturn;
        }
        else{
            compareReturn = "less";
            return compareReturn;
        }
    }   
};

#endif /* PETDATABASESEARCHABLEBYWEIGHT_H */

