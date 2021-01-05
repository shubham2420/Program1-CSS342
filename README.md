# Program1

CSS342-Program1

Programming Assignment 1: Class Design and Operator Overloading

Assignment Objectives:

This programming assignment will provide exercises in designing classes with proper abstraction and encapsulation. Encapsulation and abstraction are key components of the C++ programming language as well as OOP in general. In addition, the programming assignment will require understanding of operator overloading and some use of the friend concept.

Problem 1: bookType

Design a bookType class that defines the book as an ADT. Some of the characteristics of a book are the title, author(s), publisher, ISBN, price, and year of publication. You only need to design the interface (.h file) and not the implementation (.cpp file)

Each object of the class bookType can hold the following information about a book: title, up to four authors, publisher, ISBN, price, and number of copies in stock. To keep track of the number of authors, add another member variable. Include the member functions to perform the various operations on objects of type bookType. For example, the usual operations that can be performed on the title are to show the title, set the title, and check whether a title is the same as the actual title of the book. Similarly, the typical operations that can be performed on the number of copies in stock are to show the number of copies in stock, set the number of copies in stock, update the number of copies in stock, and return the number of copies in stock. Add similar operations for the publisher, ISBN, book price, and authors. Add the appropriate constructors.

Problem 2:

Design and implement a class complexType, that can be used to process complex numbers.

A number of the form a +ib, in which i2 = -1 and a and b are real numbers, is called a complex number. We call a the real part and b the imaginary part of a + ib.

Complex numbers can also be represented as ordered pairs (a, b).

The class you will design should have the following features.

Constructor

Your class should have a default constructor as well as a parametrized constructor (which requires 2 double arguments).

Accessor functions required

Your class should implement the following member functions:

setComplex – set the real and imaginary parts of the complex number

getComplex – get the real and imaginary parts complex number

Operator Overloading

The class must overload and implement the following operators:

Stream I/O

Extend the definition of the class complexType so that it overloads stream insertion and extraction operators To output a complex number in the form (a, b)

in which a is the real part and b is the imaginary part, the algorithm is as follows:

Output the left parenthesis, (. Output the real part. Output the comma and a space. Output the imaginary part. Output the right parenthesis, ). The algorithm to read this complex number is as follows:

Read and discard the left parenthesis. Read and store the real part. Read and discard the comma. Read and store the imaginary part. Read and discard the right parenthesis.

and -: Extend the class to perform addition addition and subtraction operations. Overload the operators addition and subtraction for this class as member functions and define the functions. If (a, b) and (c, d) are complex numbers:
(a, b) + (c, d) = (a + c, b + d)

(a, b) - (c, d) = (a - c, b - d)

and /: Extend the class to perform the multiplication and division operations. Overload the operators multiplication and division for this class as member functions and define the functions. If (a, b) and (c, d) are complex numbers:
((a, b) * (c, d) = ac +ad + bc +bd

If (c, d) is nonzero:

(a, b)/(c, d)=((ac +bd)/(c2 +d2 ), (-ad +bc)/( c2 +d2))

=: The class must implement = assignment statement as well.

What to submit?

bookType.h

complexType.h

complexType.cpp

complexTypeDriver.cpp

output (as text file ), with clear headings for each function tested.

Output file should test all functions specified in the class : Example – what happens when you call set/get methods? What happens when you add/subtract/multiply/divide two complex numbers? What happens when you try to print the complex number using the class object?

Grading Rubric

bookType.h - 10 points

complexType - Code Compiles and Runs - 10 points

complexType - Code Correctness - 25 points

complexType - Coding Guidelines/comments - 5 points
