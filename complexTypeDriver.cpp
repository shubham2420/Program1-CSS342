#include <iostream>
#include "complexType.h"
using namespace std;

int main()
{
complexType first = complexType(2, 4.7); //creates a instance of complexType //2 , 4.7
complexType second = complexType(3, 6);  //3, 6
cout << "===============================================" << endl;
cout << "Output for object complexType test:" << endl; 
cout << first << endl;
cout << "Test for Addition of first and Second:" << endl;
complexType third = first + second; // adds the two complex numbers up 
cout << "Output for addition should be (5.0, 10.7): " << third << endl;
cout << "===============================================" << endl;
cout << "Test for subtraction of first and Second:" << endl;
complexType fourth = first - second; // subtracts the first and second 
cout << "Output for subtraction should be (-1.0, -1.3): " << fourth << endl;
cout << "===============================================" << endl;
cout << "Test for Multiplication of first and Second:" << endl;
complexType fifth = first * second; //multiplies first and second 
cout << "Output for  multiplication should be (18, 42.3): " << fifth << endl;
cout << "===============================================" << endl;
cout << "Test for division of first and Second:" << endl; 
complexType sixth = first/second; //division for first and second 
cout << "Output for division should be (.76, .0466667): " << sixth << endl;
cout << "===============================================" << endl;
cout << "Testing the equivalency function in complexType" << endl;
sixth = first; //sets six equal to first 
cout << "Sixth should be: " << sixth << endl;
cout << "First should be: " << first << endl;
cout << "===============================================" << endl;
cout << "Testing the getter for First: " << endl;
cout << first.getComplex() << endl; //prints out the complex number in parenthesis form 
cout << "===============================================" << endl;
cout << "Testing the setter method for first: " << endl;
first.setComplex(1, 2); //sets new values to first 
cout << first << endl;
cout << "===============================================" << endl;
return 0;
}

