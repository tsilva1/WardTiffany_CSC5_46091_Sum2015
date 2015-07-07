/*  
 * File:   main.cpp 
 * Author: Tiffany Ward 
 * Created on July 7, 2015, 2:36 AM
 * Purpose: Homework 2 Savitch 9 
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
    int n, sum=0, pos=0, neg=0, even=0, odd=0;
    
    //Prompt user to input 10 integers
    cout << "Enter 10 integers seperated by spaces: \n";
        for(int count=1;count<=10;count++){
            cin >> n;
            sum += n; 
            if (n>0) pos += n;
            else neg += n;
            if (n%2) odd += n;
            else even += n;
    }
    
    //Output the results
    cout << "Sum =                           " << setw(4) << sum << endl; 
    cout << "Sum of positive integers only = " << setw(4) << pos << endl; 
    cout << "Sum of negative integers only = " << setw(4) << neg << endl; 
    cout << "Sum of even integers only =     " << setw(4) << even << endl; 
    cout << "Sum of odd integers only =      " << setw(4) << odd << endl;
    
    //Exit Stage right! 
    return 0; 
} 
