/******************************************************************************
 ** Date: Aug 9, 2019
 ** Description: Quadratic class specification file
 *****************************************************************************/
#ifndef QUADRATIC_HPP_
#define QUADRATIC_HPP_

class Quadratic{
private:
    double a, b, c;
public:
    Quadratic();
    Quadratic(double, double, double);
    void setA(double);
    void setB(double);
    void setC(double);
    double valueFor(double);
    int numRealRoots();
};



#endif

