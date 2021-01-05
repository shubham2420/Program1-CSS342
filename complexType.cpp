#include "complexType.h"

    //Implementation for no arg constructor
    complexType::complexType()
    {
        realPart = 0;
        imaginaryPart = 0;
    }
    
    //Implementation for arg constructor 
    complexType::complexType(double real, double imaginary)
    {
        this-> realPart = real;
        this-> imaginaryPart = imaginary;
    }
    
    //Implementation for getting the imaginary and real part of a complex num
    string complexType::getComplex() const
    {
        return "Real:" + to_string(realPart) + "Imaginary:" + to_string(imaginaryPart); 
    }

    //sets the imaginary and real part of a complex num
     void complexType:: setComplex(double real, double imaginary)
     {
         this-> realPart = real;
         this -> imaginaryPart = imaginary;
     }

    //overrides the output in the console 
     ostream & operator<<(std::ostream& os, const complexType& d) 
     {
        return os << "(" << d.realPart << ", " << d.imaginaryPart << ")";
     }

    //reads in from the console 
     istream & operator >> (istream &in , complexType &d)
     {
        string temp = "";
        getline(in, temp); //stores the input to temp
        temp.erase(0,1); //gets rid of parenthesis 
        temp.erase(temp.length() -2, temp.length() -1); 
        d.realPart = stod(temp.substr(0, temp.find(","))); //stores the real part
        d.imaginaryPart = stod(temp.substr(temp.find(","), temp.length() -1)); // stores the imaginery part 
        return in; 
     }

     complexType complexType::operator+(const complexType &other) const
     {
        return complexType( realPart + other.realPart,  imaginaryPart + other.imaginaryPart); //adds the two numbers and returns a complexType 
     }

     complexType complexType::operator*(const complexType &other) const
     {
         return complexType( (realPart * other.realPart) + (realPart * other.imaginaryPart),  (imaginaryPart * other.imaginaryPart) + (imaginaryPart * other.realPart));
         //multiplies and returns a complexType
     }

    complexType complexType::operator-(const complexType &other) const
     {
         return complexType( realPart - other.realPart,  imaginaryPart - other.imaginaryPart);
         //subtracts and returns the complexType 
     }

     complexType complexType::operator/(const complexType &other) const
     {
         double c = other.realPart;
         double d = other.imaginaryPart;
         double a = realPart;
         double b = imaginaryPart;
         if(other.realPart != 0 or other.imaginaryPart != 0) //checks to make sure other is not 0 
         {
            return complexType(((a*c) + (b*d)) / ((c*c) + (d*d)), ((-a*d) + (b*c)) / ((c*c) + (d*d)));
         }else
         {
             return complexType(0,0);
         }
         //divides and returns a complex type only if other is non-zero
     }

     complexType complexType::operator=(const complexType &other)
     {  
         realPart = other.realPart;
         imaginaryPart = other.imaginaryPart;
         return complexType(other.realPart, other.imaginaryPart);
         //sets the complex equal to other
     }
