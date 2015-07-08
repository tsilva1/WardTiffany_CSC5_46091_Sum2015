/*  
 * File:   main.cpp 
 * Author: Tiffany Ward 
 * Created on July 7, 2015, 3:32 AM 
 * Purpose:  Homework 3 Gaddis 7
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
    
    //Declare variables 
    int inpSecs, yrs, mnths, wks, days, hrs, min, secs; 
     
    //Prompt user to enter seconds
    cout << "Please enter seconds to be converted: ";
    cin >> inpSecs;
    cout << endl;
    cout << inpSecs << " seconds is equivalent to:" << endl;

    //Calculate the values 
    secs = inpSecs % 60;  //How many seconds 
    inpSecs /= 60;        //Now determine minutes 
    min = inpSecs % 60;   //How many minutes 
    inpSecs /= 60;        //Now determine hours 
    hrs = inpSecs % 24;   //How many hours 
    inpSecs /= 24;        //Now determine days 
    days = inpSecs % 7;   //How many days 
    inpSecs /= 7;         //Now determine weeks 
    wks = inpSecs % 4;    //How many weeks 
    inpSecs /= 4;         //Now determine months 
    mnths = inpSecs % 12; //How many months 
    yrs = inpSecs / 12;   //How many years 
     
    //Output the results 
    cout << "The number of years   = " << yrs << endl; 
    cout << "The number of months  = " << mnths << endl; 
    cout << "The number of weeks   = " << wks << endl; 
    cout << "The number of days    = " << days << endl; 
    cout << "The number of hours   = " << hrs << endl; 
    cout << "The number of minutes = " << min << endl; 
    cout << "The number of seconds = " << secs << endl;
    cout << "_____________________________\n";
     
    //Check result 
    cout << "As a check = ";
    cout << ((((((yrs * 12 + mnths) * 4 + wks) * 7 + days)
            * 24 + hrs) * 60 + min) * 60 + secs); 
    cout<<" seconds"; 

    //Exit stage right! 
    return 0; 
} 
