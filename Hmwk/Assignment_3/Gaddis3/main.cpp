/* 
 * File:   main.cpp
 * Author: Tiffany Ward
 * Created on July 5, 2015, 9:22 PM
 * Purpose:  Homework 3 Gaddis 3
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
    int month, day, year;
    
    //Prompt user to enter a month in digits
    cout << "Please enter a month (1-12): ";
    cin >> month;
    //Prompt user to enter a day
    cout << "Please enter a day (1-31): ";
    cin >> day;
    //Prompt user to enter a year (YY))
    cout << "Please enter the last two digits of a year (YY): ";
    cin >> year;
    
    //Output results
    //If month * day = year; magic
    //Else; not magic
    if ((month * day) == year)
        cout << "The date is magic!\n";
    else cout << "The date entered is not magic.\n";
    
//Exit Stage Right!
return 0;
}