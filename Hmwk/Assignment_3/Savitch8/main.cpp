/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 7, 2015, 10:24 PM
 * Purpose:  Homework 3 Savitch 8
 */ 

//System Libraries 
#include <iostream>  //I/O Library
#include <cmath> 
#include <iomanip> 
using namespace std; //std namespace -> iostream

//User Libraries 

//Global Constants 
const float PI=4*atan(1.0); 

//Function Prototypes 

//Execution Begins Here! 
int main(int argc, char** argv) { 
    //Declare and initialize variables 
    int nTerms=20000000; 
    float apprxPI=1.0L; 
    float tol=1e-50; 
     
    //Calculate PI (for-loop) 
    for (int i=3,nTerm=1;nTerm<=nTerms;i+=4,nTerm+=2){ 
        float del = (-1.0L / (i + 0.0L) + 1.0L / (i + 2.0L)); 
        apprxPI += del;
        if (del>-tol&&del<tol)break; 
    } 
    apprxPI *= 4.0L; 
     
    //Output the results and compare 
    cout << fixed << showpoint << setprecision(20); 
    cout << "Exact Value of PI = " << PI << endl; 
    cout << "The approximate value of PI = " << apprxPI << endl; 
     
    //Exit stage right! 
    return 0; 
}