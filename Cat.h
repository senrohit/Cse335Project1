/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cat.h
 * Author: justi
 *
 * Created on February 23, 2018, 11:01 AM
 */

#ifndef CAT_H
#define CAT_H

#include"Pet.h"

class Cat:public Pet{
protected:
    // special data member only for cat
    bool _fluffy;
    
public:
    // constructor for cat
    Cat(string name, string type, double price, unsigned int weight,
            bool fluffy){
        _name = name;
        _type = type;
        _weight = weight;
        _price = price;
        _fluffy = fluffy;
    }
    //Destructor
    ~Cat(){}
    //getter for name
    virtual string GetName() const{
        return this->_name;
    }
    //getter for type
    virtual string GetType() const{
        return this->_type;
    }
    //getter for weight
     virtual unsigned int GetWeight() const{
        return this->_weight;
    }
    //getter for price
    virtual float GetPrice() const{
        return this->_price;
    }
    // getter for fluffy
    bool GetFluffy() const{
        return this->_fluffy;
    }
    // print function gets implemented here to print out info
    virtual void print() const{
        cout << left << boolalpha;
        cout << "Name:   " << setw(8) << GetName();
        cout << "Type:   " << setw(10) << GetType();
        cout << "Weight:   " << setw(4) << GetWeight();
        cout << "Price:   " << setw(8) << GetPrice();
        cout << setw(13) << "Fluffy:" << GetFluffy(); 
        cout << endl;
    }
};

#endif /* CAT_H */

