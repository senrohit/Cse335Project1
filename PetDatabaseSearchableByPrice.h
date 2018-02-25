/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PetDatabaseSearchableByPrice.h
 * Author: Rohit
 *
 * Created on February 23, 2018, 7:47 PM
 */

#ifndef PETDATABASESEARCHABLEBYPRICE_H
#define PETDATABASESEARCHABLEBYPRICE_H

#include "Pet.h"
#include "PetDatabaseSearchable.h"
#include "PetDatabaseSortableByPrice.h"

class PetDatabaseSearchableByPrice:public PetDatabaseSearchable{
public:
    // constructor
    PetDatabaseSearchableByPrice(PetDatabaseSortableByPrice* pdsbp){
        _petVec = pdsbp->getVector();
    }
    // destructor
    ~PetDatabaseSearchableByPrice(){}
    // set Query function
    void setQuery(float num){
        _query = num;
    }
    // get pet function to display the pet
    Pet* getPet(int i){
        return _petVec[i];
    }
protected:
    // variable to store the query
    float _query;
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
        if (_petVec[i]->GetPrice() == _query){
            compareReturn = "middle";
            return compareReturn;
        }
        else if (_petVec[i]->GetPrice() > _query){
            compareReturn = "greater";
            return compareReturn;
        }
        else{
            compareReturn = "less";
            return compareReturn;
        }
    }   
};


#endif /* PETDATABASESEARCHABLEBYPRICE_H */

