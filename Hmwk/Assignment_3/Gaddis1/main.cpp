/* 
 * File:   main.cpp
 * Author: Tiffany Ward
 * Created on July 7, 2015, 8:03 PM
 * Purpose:  Homework 3 Gaddis 1
 */
 
//System Libraries
#include <iostream>  //I/O Library
using namespace std; //std namespace -> iostream

//User Libraries

//Global constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare variables here
    int numone, numtwo;
    char ans;
    
    //Prompt user to enter two integers
    cout << "Please choose an integer: ";
    cin >> numone;
    cout << "Please choose an integer: ";
    cin >> numtwo;
    
    //Output results (if/else)
    if (numone > numtwo)
        cout << numone << " is greater than " << numtwo << endl;
    else if (numone < numtwo)
        cout << numtwo << " is greater than " << numone << endl;
    else
        cout << "The two numbers entered are equal.\n";
    cout << "Good-Bye\n";
    
//Exit Stage Right!
return 0;
}