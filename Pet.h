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
    
public:
    // constructor 
    //Pet(string name, string type, unsigned int weight, double price) {};
    // virtual getters for the protected data members
    virtual string GetName() const = 0;
    virtual string GetType() const = 0;
    virtual unsigned int GetWeight() const = 0;
    virtual double GetPrice() const = 0;
    // basic virtual print non-implemented function
    virtual void print() const = 0;
};


#endif /* PET_H */

