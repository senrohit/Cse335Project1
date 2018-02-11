/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dog.h
 * Author: Ross
 *
 * Created on February 11, 2018, 5:19 PM
 */

#ifndef DOG_H
#define DOG_H

#include"Pet.h"

class Dog:public Pet{
    protected:
        // special data memeber only for dog
        string _category;
        // constructor for dog
        Dog(string name, string type, unsigned int weight, double price, string
                category){
            _name = name;
            _type = type;
            _weight = weight;
            _price = price;
            _category = category;
        }
        // getter for breed
        string GetCategory() const{
            return this->_category;
        }
        // print function gets implemented here to print out info
        virtual void print() const{
            cout << "Name:   " << GetName() << " Type:   " << GetType() << 
                    " Weight:   " << GetWeight() << " Price:   " << GetPrice()
                    << " Category:   " << GetCategory() << endl;
        }
        
        
};


#endif /* DOG_H */

