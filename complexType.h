#pragma once
#include <iostream>
#include <string>
using namespace std;
/**
 * Description: Interface for class complexType
 *  
 * @author: Shubham Kamboj 
 * @version date: October 16, 2020 
 * */

#ifndef complexType_H
#define complexType_H
class complexType{
    protected:
    double realPart; //stores the real part
    double imaginaryPart; // stores the imaginery part 

    public:
    //constructors 
    complexType(); 
    complexType(double real, double imaginary);  

    //methods for IOS Stream
    friend ostream & operator << (ostream &out, const complexType &d);

    friend istream & operator >> (istream &in, complexType &d); 

    // Operator overload methods 
    complexType operator*(const complexType &other) const;

    complexType operator+(const complexType &other) const;

    complexType operator-(const complexType &other) const;

    complexType operator/(const complexType &other) const;

    complexType operator=(const complexType &other);

    // Setter method
    void setComplex(double real, double imaginary);

    //Getter method 
    string getComplex() const;

};
#endif
