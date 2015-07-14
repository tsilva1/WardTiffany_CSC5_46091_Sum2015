/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 12, 2015, 9:06 PM
 * Purpose:  Homework 4 Gaddis 1
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
    int n, sum=0; //n=number to be entered by user
    
    //Prompt user to input positive number
    cout<<"Please enter a positive whole number: ";
    cin>>n;
    
    //Calculate sum of numbers from 1 to n - loop
    //Do not let user enter negative number
    for (int i=1;i<=n;i++)
        sum+=i;
    if (n<1){
        cout<<"Please enter a number greater than 0.\n";
        return 1;
    }else cout<<"The sum of numbers 1 through "<<n<<" is = " <<sum<<endl;
    //Exit Stage Right
    return 0;
}