/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortIncreasing.h
 * Author: justi
 *
 * Created on February 11, 2018, 1:39 PM
 */

#ifndef BUBBLESORTINCREASING_H
#define BUBBLESORTINCREASING_H

#include "BubbleSort.h"
#include "PetDatabaseSortable.h"

class BubbleSortIncreasing: public BubbleSort {
public:
    //default constructor 
    BubbleSortIncreasing() {}
    //destructor
    ~BubbleSortIncreasing() {}
private:
    bool needSwap(PetDatabaseSortable* pdb, int i, int j) const {
        return !pdb->smaller(i, j);
    }

};

#endif /* BUBBLESORTINCREASING_H */

