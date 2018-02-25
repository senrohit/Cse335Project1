/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinarySearch.h
 * Author: Rohit
 *
 * Created on February 23, 2018, 6:13 PM
 */

#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include "PetDatabaseSearchable.h"

class BinarySearch{
public:
    // search method
    int search(PetDatabaseSearchable *pds){
        int left = 0;
        int right = pds->getSize()-1;
        while (left <= right){
            int middle = (left+right)/2;
            string result = pds->compareAt(middle);
            if (result == "middle"){
                return middle;
            }
            else if (result == "greater"){
                right = middle - 1;
            }
            else if (result == "less"){
                left = middle + 1;
            }
        }
        return -1;
    }
};


#endif /* BINARYSEARCH_H */

