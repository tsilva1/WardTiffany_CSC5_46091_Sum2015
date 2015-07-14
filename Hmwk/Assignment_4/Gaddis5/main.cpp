/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 13, 2015, 12:32 AM
 * Purpose:  Homework 4 Gaddis 5
 */ 

//System Libraries 
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std; //std namespace -> iostream

//User Libraries 

//Global Constants

//Function Prototypes 

//Execution Begins Here! 
int main(int argc, char** argv) {
    //Declare and initialize variables
    float fee=2500;
    //Header
    cout<<"Current Membership Fee: $ 2500.00\n";
    cout<<endl;
    cout<<"Membership fees will be increasing 4% every year for the next "
            "6 years.\n";
    cout<<"New rates for each year are listed below:\n";
    cout<<endl;
    cout<<"Year      New Rate\n";
    //Loop for membership rate increase
    //Year 1 to 6
    //Rate increase of 4% each year
    for(int year=1;year<=6;year++)
    {
        float yrlyInc=1.04;
        fee*=yrlyInc;
        //Output new rate for the next 6 years
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<setw(3)<<year<<setw(8)<<"$ "<<fee<<endl;
    }
    //Exit stage right!
    return 0;
}