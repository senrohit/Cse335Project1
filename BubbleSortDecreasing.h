/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortDecreasing.h
 * Author: justi
 *
 * Created on February 11, 2018, 1:38 PM
 */

#ifndef BUBBLESORTDECREASING_H
#define BUBBLESORTDECREASING_H

#include "BubbleSort.h"
#include "PetDatabaseSortable.h"

class BubbleSortDecreasing: public BubbleSort {
private:
    bool needSwap(PetDatabaseSortable* pdb, int i, int j) const {
        return pdb->smaller(i, j);
    }

};

#endif /* BUBBLESORTDECREASING_H */

