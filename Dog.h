/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dog.h
 * Author: Rohit
 *
 * Created on February 11, 2018, 5:19 PM
 */

#ifndef DOG_H
#define DOG_H

#include"Pet.h"

class Dog:public Pet{
protected:
    // special data member only for dog
    string _category;
    
    
public:
    // constructor for dog
    Dog(string name, string type, double price, unsigned int weight,
            string category){
        _name = name;
        _type = type;
        _weight = weight;
        _price = price;
        _category = category;
    }
    // destructor
    ~Dog(){}
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
    string GetCategory() const{
        return this->_category;
    }
    // print function gets implemented here to print out info
    virtual void print() const{
        cout << left << boolalpha;
        cout << "Name:   " << setw(8) << GetName();
        cout << "Type:   " << setw(10) << GetType();
        cout << "Weight:   " << setw(4) << GetWeight();
        cout << "Price:   " << setw(8) << GetPrice();
        cout << setw(13) << "Category:" << GetCategory(); 
        cout << endl;
    }
};


#endif /* DOG_H */

