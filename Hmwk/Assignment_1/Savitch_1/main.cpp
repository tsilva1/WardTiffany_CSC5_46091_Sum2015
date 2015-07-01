    /* 
    * File:   main.cpp
    * Author: Tiffany Ward
    * Created on June 27, 2015, 10:42 PM
    * Purpose:  Homework 1 Savitch 1
    */

    //System Libraries
    #include <iostream>  //I/O Library
    using namespace std; //std namespace -> iostream

    //User Libraries

    //Global constants

    //Function Prototypes

    //Execution Begins Here!
    
    int main(int argc, char** argv) {

    //Declare Variables Here
    float a, b, sum, product;

    //Initialize Values
    a = 124.0f; //first number = 124
    b = 317.0f; //second number = 317

    //Calculate the sum of a and b.
    sum = a + b;
    
    //Calculate the product of a and b.
    product = a * b;
    
    //Output the results
    cout << a << " + " << b << " = " << sum << endl;
    cout << a << " * " << b << " = " << product << endl;
    cout << "This is the end of the program." << endl;
    
    //Exit Stage Right!
    return 0;
    }
