/******************************************************************************
 ** Date: Aug 9, 2019
 ** Description: A class called Quadratic that has 3 double data members (a, b
 ** and c). It has five methods (setA, setB, setC, valueFor and numRealRoots)
 *****************************************************************************/
#include "Quadratic.hpp"
#include <cmath>

/******************************************************************************
 **             Quadratic::Quadratic(double, double, double)
 ** Constructor that takes three parameters and uses them to initialize the
 ** data members.
 *****************************************************************************/
Quadratic::Quadratic(double one, double two, double three){
    a = one;
    b = two;
    c = three;
}

/******************************************************************************
 **                   Quadratic::Quadratic()
 ** Default constructor that initializes each data member to 1.0
 *****************************************************************************/
Quadratic::Quadratic(){
    a = 1.0;
    b = 1.0;
    c = 1.0;
}

/******************************************************************************
 **                  void Quadratic::setA(double)
 ** Sets the data member a to the double parameter
 *****************************************************************************/
void Quadratic::setA(double one){
    a = one;
}

/******************************************************************************
 **                  void Quadratic::setB(double
 ** Sets the data member b to the double parameter
 *****************************************************************************/
void Quadratic::setB(double two){
    b = two;
}

/******************************************************************************
 **                  void Quadratic::setC(double)
 ** Sets the data member c to the double parameter
 *****************************************************************************/
void Quadratic::setC(double three){
    c = three;
}

/******************************************************************************
 **              double Quadratic::valueFor(double num)
 ** Method returns the value of the Quadratic formula (ax^2 + bx + c) give the
 ** value of x that was used as the parameter.
 *****************************************************************************/
double Quadratic::valueFor(double num){
    double x = num;
    return ((a * (pow(x,2))) + (b*x) + c);
}

/******************************************************************************
 **             int Quadratic::numRealRoots()
 ** Returns the number of real roots the Quadratic has using the expression
 ** b^2-4ac.
 *****************************************************************************/
int Quadratic::numRealRoots(){
    double exp = ((pow(b,2)) - (4*a*c));
    int root = 0;
    //if the expression is greater than 0 then the equation has 2 real roots
    if (exp > 0){
        root = 2;
    }
    //if the expression is less than 0 then the equation has 0 real roots
    else if(exp < 0){
        root = 0;
    }
    /*if the expression is equal to 0 then the expression has 1 real root
    Due to round-off errors will test for equality to 0 within a small range
    (0.00001) in either direction */
    else if(exp == 0.00001 || exp == -0.00001 || exp == 0){

        root = 1;
    }
    return root;
}

