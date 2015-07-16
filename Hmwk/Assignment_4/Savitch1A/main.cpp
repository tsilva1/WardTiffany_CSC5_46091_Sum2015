/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 13, 2015, 8:32 PM
 * Purpose:  Homework 4 Savitch 1A
 */ 

//System Libraries 
#include <iostream>  //I/O Library
#include <iomanip> 
using namespace std; //std namespace -> iostream

//User Libraries 

//Global Constants 
const float lit_gal=.264179;

//Function Prototypes 

//Execution Begins Here! 
int main(int argc, char** argv) { 
    //Declare and initialize variables 
    float ltrGAS; //Liters of gas consumer
    float miles; //miles driven
    float galGAS; //gallons of gas
    float mpg; //miles per gallon
    char ans;
    do
    {
        //Prompt user to enter liters consumed and miles driven 
        cout<<"Enter number of liters of gasoline consumed by vehicle: ";
        cin>>ltrGAS;
        cout<<"Enter number of miles traveled: ";
        cin>>miles;
        //Covert liters to gallons
        galGAS=ltrGAS*lit_gal;
    
        //Calculate miles per gallon
        mpg=miles/galGAS;
        //Output results
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Your vehicle delivered "<<mpg<<" miles per gallon.\n";
        cout << endl;
        //Give user option to enter new liters and miles
        cout << "Would you like to try again? (y/n): ";
        cin >> ans;
    } while (ans == 'y'||ans == 'Y');
    //Output if users choose to end program
    cout << "Good-Bye\n";
    //Exit Stage Right
return 0;
}