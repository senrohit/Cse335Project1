/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PetDatabaseSortableByType.h
 * Author: justi
 *
 * Created on February 23, 2018, 2:11 PM
 */

#ifndef PETDATABASESORTABLEBYTYPE_H
#define PETDATABASESORTABLEBYTYPE_H

#include "Pet.h"
#include "PetDatabaseSortable.h"

class PetDatabaseSortableByType: public PetDatabaseSortable {
public:
    //constructor
    PetDatabaseSortableByType(vector<Pet*> petVec) {
        _petVec = petVec;
    }
    //Display all record
    virtual void DisplayRecords() const {
        for (int i = 0; i < _petVec.size(); ++i) {
            _petVec[i]->print();
        }
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
        return _petVec[i]->GetType() < _petVec[j]->GetType();
    }
    //swap two entries
    virtual void swap(int i, int j) {
        Pet* temp = _petVec[i];
        _petVec[i]= _petVec[j];
        _petVec[j] = temp;
    }
};

#endif /* PETDATABASESORTABLEBYTYPE_H */

