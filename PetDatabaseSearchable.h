/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PetDatabaseSearchable.h
 * Author: Rohit
 *
 * Created on February 23, 2018, 6:29 PM
 */

#ifndef PETDATABASESEARCHABLE_H
#define PETDATABASESEARCHABLE_H

// base class which has base functions
class PetDatabaseSearchable{
public:
    virtual unsigned int getSize() const = 0;
    virtual string compareAt(int i) = 0; 
};

#endif /* PETDATABASESEARCHABLE_H */

