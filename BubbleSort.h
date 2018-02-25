/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSort.h
 * Author: justi
 *
 * Created on February 11, 2018, 1:35 PM
 */

#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "PetDatabaseSortable.h"

class BubbleSort{
public:
    void sort(PetDatabaseSortable* pdb) {
        bool sorted = false;
        int n=pdb->getSize();
        while( !sorted ){
            sorted = true;
            for(int i=1; i<n; i++){
                if(needSwap(pdb, i-1, i)){
                    pdb->swap(i-1,i);
                    sorted = false;
                }
            }
            n--;
        }
    }
    virtual bool needSwap(PetDatabaseSortable* pdb, int i, int j) const = 0;
};
#endif /* BUBBLESORT_H */

