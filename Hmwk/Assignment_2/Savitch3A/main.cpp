/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 6, 2015, 1:37 AM
 * Purpose: Homework 2 Savitch 3A
 */ 

//System Libraries 
#include <iostream> 
using namespace std; 
 
//User Libraries 

//Global Constants 
const int HR_MIN=60;//Convert hours to minutes 
const int MIN_SEC=60;//Convert minutes to seconds

//Function Prototypes 

//Execution Begins Here! 
int main(int argc, char** argv) { 
    //Declare variables
    //mph = miles per hour
    //hpm = hours per mile
    //mpmdec = minutes per mile as a decimal
    float mph, hpm, mpmdec;
    //mpm = minutes per mile as a whole number
    int mpm;
    //spm = seconds per mile
    float spm; 
    cout << "Please enter how many miles you run in an hour (mph): ";
    cin >> mph;
    //convert miles per hour to hours per mile
    hpm = 1 / mph;
    //calculate minutes per mile as a decimal
    mpmdec = hpm * HR_MIN;
    //calculate minutes per mile as a whole number
    mpm = static_cast<int>(mpmdec);
    //calculate seconds per mile
    spm = (mpmdec - mpm) * MIN_SEC;
    //Output results
    cout << "= ";
    cout << mpm << " minutes and ";
    //set seconds to display only one digit after the decimal
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << spm << " seconds per mile.\n"; 

    //Exit stage right
    return 0;
}