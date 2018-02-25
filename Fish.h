/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fish.h
 * Author: Rohit
 *
 * Created on February 23, 2018, 6:06 PM
 */

#ifndef FISH_H
#define FISH_H

#include"Pet.h"

class Fish:public Pet{
protected:
    // special data member only for dog
    string _watertype;
    
    
public:
    // constructor for fish
    Fish(string name, string type, double price, unsigned int weight,
            string watertype){
        _name = name;
        _type = type;
        _weight = weight;
        _price = price;
        _watertype = watertype;
    }
    // destructor
    ~Fish(){}
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
    // getter for category
    string GetWaterType() const{
        return this->_watertype;
    }
    // print function gets implemented here to print out info
    virtual void print() const{
        cout << left << boolalpha;
        cout << "Name:   " << setw(8) << GetName();
        cout << "Type:   " << setw(10) << GetType();
        cout << "Weight:   " << setw(4) << GetWeight();
        cout << "Price:   " << setw(8) << GetPrice();
        cout << setw(13) << "WaterType:" << GetWaterType(); 
        cout << endl;
    }
};


#endif /* FISH_H */

