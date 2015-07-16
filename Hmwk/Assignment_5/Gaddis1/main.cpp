/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 7, 2015, 10:24 PM
 * Purpose:  Homework 5 Gaddis 1
 */ 

//System Libraries 
#include <iostream>  //I/O Library
#include <iomanip> 
using namespace std; //std namespace -> iostream

//User Libraries 

//Global Constants

//Function Prototypes
void calculateRetail(float, float);

//Execution Begins Here! 
int main(int argc, char** argv) { 
    //Declare and initialize variables
    float cost;//wholesale cost of item
    float markup;//item's markup
    float retail;//retail price of item after markup
    float convPER;//convert percentage to decimal
    
    //Prompt user to enter cost and markup
    cout<<"Please enter the item's wholesale cost: $ ";
    cin>>cost;
    cout<<"Please enter the markup percentage. Please enter as a whole number"
            " (1-100): ";
    cin>>markup;
    if ((cost<0)||(markup<0)){
        cout<<"Please only enter positive values.\n";
        return 1;
    }else
        
    //Call calculateRetail
    calculateRetail(cost, markup);
}

//************************************************************
// Definition of function calculateRetail. *
// It uses two floats to determine retail cost. *
//************************************************************
void calculateRetail(float a, float b)
{
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The retail price is $ "<<(a*(1+(b/100)))<<endl;
}