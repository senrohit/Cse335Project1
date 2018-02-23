/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bird.h
 * Author: justi
 *
 * Created on February 23, 2018, 10:57 AM
 */

#ifndef BIRD_H
#define BIRD_H

#include"Pet.h"

class Bird:public Pet{
protected:
    // special data member only for bird
    bool _nocturnal;

public:
    // constructor for bird
    Bird(string name, string type, double price, unsigned int weight, 
            bool nocturnal){
        _name = name;
        _type = type;
        _weight = weight;
        _price = price;
        _nocturnal = nocturnal;
    }
    //getter for name
    virtual string GetName() const{
        return this->_name;
    }
    // getter for type
    virtual string GetType() const{
        return this->_type;
    }
     virtual unsigned int GetWeight() const{
        return this->_weight;
    }
     //getter for price
    virtual double GetPrice() const{
        return this->_price;
    }
    // getter for nocturnal
    bool GetNocturnal() const{
        return this->_nocturnal;
    }
    // print function gets implemented here to print out info
    virtual void print() const{
        cout << left << boolalpha;
        cout << "Name:   " << setw(8) << GetName();
        cout << "Type:   " << setw(10) << GetType();
        cout << "Weight:   " << setw(4) << GetWeight();
        cout << "Price:   " << setw(8) << GetPrice();
        cout << setw(13) << "Nocturnal:" << GetNocturnal(); 
        cout << endl;
    }
};

#endif /* BIRD_H */

