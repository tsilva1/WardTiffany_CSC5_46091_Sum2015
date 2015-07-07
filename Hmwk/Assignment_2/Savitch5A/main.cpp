/* 
 * File:   main.cpp
 * Author: Tiffany Ward
 * Created on July 6, 2015, 11:34 PM
 * Purpose:  Homework 2 Savitch 5A
 */
 
//System Libraries
#include <iostream>  //I/O Library
#include <string> //string library
using namespace std; //std namespace -> iostream

//User Libraries

//Global constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    
    //Declare Variables Here
    //radius and vm = volume.
    float radius, vm;
    //Prompt user to enter a radius of a sphere.
    cout << "Enter radius of a sphere." << endl;
    cin >> radius;
    //Calculate volume
    vm = (4.0 / 3.0) * 3.1415 * radius * radius * radius;
    //Output results
    cout << "The volume is " << vm << endl;
    //Exit stage right!
    return 0;
}