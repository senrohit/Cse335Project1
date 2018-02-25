/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PetDataBaseSortable.h
 * Author: justin
 *
 * Created on February 23, 2018, 11:22 AM
 */

#ifndef PETDATABASESORTABLE_H
#define PETDATABASESORTABLE_H

class PetDatabaseSortable {
public:
    virtual unsigned int getSize() const = 0;
    virtual bool smaller(int i, int j) const = 0;
    virtual void swap(int i, int j) = 0;
    virtual void DisplayRecords() const = 0;
};

#endif /* PETDATABASESORTABLE_H */

