#include<iostream>
#include <vector>
#include "Quadratic.hpp"

using std::cout;
using std::endl;
using std::vector;

double meanValueFor(vector<Quadratic*>vec, double);

int main(){

    Quadratic q1;
    Quadratic q2;
    vector<Quadratic*> vec1;
    vec1.push_back(&q1);
    vec1.push_back(&q2);
    double result = meanValueFor(vec1, 1.0);

    cout << result << endl;

    return 0;
}

/******************************************************************************
 ** Author: Jessica Duell
 ** Date: Aug 9, 2019
 ** Description: Function that takes two parameters (vector of pointers to
 ** Quadratics and a value to use for x). It returns the average value of all
 ** the Quadratics pointed to by the vector's elements using the second
 ** parameter as the value for x for each Quadratic.
 *****************************************************************************/
#include<vector>
#include "Quadratic.hpp"
using std::vector;

double meanValueFor(vector<Quadratic*>vec, double x){
    //initialize variables to 0 so there are no junk values incorporated when running
    double mean = 0;
    double sum = 0;

    /*loop to go through the pointers and get the sum of the Quadratic function values for x value
    given in the parameter to the function */
    for (int count = 0; count < vec.size(); count++){
        sum += (*vec[count]).valueFor(x);
    }

    //calculates the mean by dividing the sum by the vector size
    mean = sum/vec.size();

    return mean;
}

