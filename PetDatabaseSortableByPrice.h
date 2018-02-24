/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PetDatabaseSortableByPrice.h
 * Author: justi
 *
 * Created on February 23, 2018, 2:21 PM
 */

#ifndef PETDATABASESORTABLEBYPRICE_H
#define PETDATABASESORTABLEBYPRICE_H

#include "Pet.h"
#include "PetDatabaseSortable.h"

class PetDatabaseSortableByPrice: public PetDatabaseSortable {
public:
    //constructor
    PetDatabaseSortableByPrice(vector<Pet*> petVec) {
        _petVec = petVec;
    }
    //Display all record
    virtual void DisplayRecords() const {
        for (int i = 0; i < _petVec.size(); ++i) {
            _petVec[i]->print();
        }
    }
    // returns the vector for use in Searchable class
    vector<Pet*> getVector(){
        return _petVec;
    }
protected:
    //member variable of a vector of pet pointers
    vector<Pet*> _petVec;
    
    //get size of _petVec
    virtual unsigned int getSize() const {
        return _petVec.size();
    }
    //compare two names
    virtual bool smaller(int i, int j) const {
        return _petVec[i]->GetPrice() < _petVec[j]->GetPrice();
    }
    //swap two entries
    virtual void swap(int i, int j) {
        Pet* temp = _petVec[i];
        _petVec[i]= _petVec[j];
        _petVec[j] = temp;
    }
};

#endif /* PETDATABASESORTABLEBYPRICE_H */

