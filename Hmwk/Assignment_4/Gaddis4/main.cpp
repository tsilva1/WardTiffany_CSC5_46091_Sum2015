/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 12, 2015, 11:59 PM
 * Purpose:  Homework 4 Gaddis 4
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
    //Header
    cout << "Minutes      Calories Burned\n";
    //Loop for calories burned
    //Mins 5 to 30; increments of 5
    //Calories = 3.6 burned per minute
    for(int mins=5;mins<=30;mins+=5)
    {
        float cals=3.6;
        cals*=mins;
        //Output minutes and calories burned
        cout<<setw(4)<<mins<<setw(18)<<cals<<endl;
    }
    //Exit stage right!
    return 0;
}