/*  
 * File:   main.cpp
 * Author: Tiffany Ward
 * Created on July 6, 2015 12:37 AM
 * Purpose: Homework 2 Savitch 2A
 */ 

//System Libraries 
#include <iostream>
using namespace std; //std namespace -> iostream
 
//User Libraries 

//Global Constants 
 
//Function Prototypes 
 
//Execution Begins Here! 
int main(int argc, char** argv) {

    //Declare variables
    //n = number
    //r = root
    //guess = estimate of root
    float n, r, guess, i; 
    //Prompt and have user input a number 
    cout<<"Enter a number to estimate the square root: ";
    cin>>n;
    //Calculate first guess (i=1)
    guess = n / 2;
    //Set problem to calculate 100 times prior to displaying an answer
    for (i=1;i<=100;++i)
    {
       r = n / guess;
       guess = (guess + r) / 2;
       cout << i << " = " << guess <<endl;
    }
    //Output answer (i=100)
    cout << "Estimate of square root: " << guess << endl;

//Exit stage right 
return 0; 
} 
