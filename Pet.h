/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pet.h
 * Author: Rohit & Justin
 *
 * Created on February 11, 2018, 4:55 PM
 */

#ifndef PET_H
#define PET_H

// base class Pet
class Pet{
protected:
    // protected data members so that the client can't access them
    string _name;
    string _type;
    unsigned int _weight;
    double _price;
    
public:
    // virtual getters for the protected data members
    virtual string GetName() const = 0;
    virtual string GetType() const = 0;
    virtual unsigned int GetWeight() const = 0;
    virtual float GetPrice() const = 0;
    // basic virtual print non-implemented function
    virtual void print() const = 0;
};


#endif /* PET_H */

