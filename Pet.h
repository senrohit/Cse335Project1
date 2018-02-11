/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pet.h
 * Author: Ross
 *
 * Created on February 11, 2018, 4:55 PM
 */

#ifndef PET_H
#define PET_H

// base class Pet
class Pet{
protected:
    // vector to contain all the pet info
    // protected data members so that the client cant access them
    string _name;
    string _type;
    unsigned int _weight;
    double _price;
    // getters for the protected data members
    string GetName() const{
        return this->_name;
    }
    string GetType() const{
        return this->_type;
    }
    unsigned int GetWeight() const{
        return this->_weight;
    }
    double GetPrice() const{
        return this->_price;
    }
    // basic virtual print non-implemented function
    virtual void print() const = 0;
    // constructor 
    Pet(){}
};


#endif /* PET_H */

