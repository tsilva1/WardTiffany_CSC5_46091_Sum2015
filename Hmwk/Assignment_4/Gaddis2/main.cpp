/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 12, 2015, 10:00 PM
 * Purpose:  Homework 4 Gaddis 2
 */ 

//System Libraries 
#include <iostream>  //I/O Library
using namespace std; //std namespace -> iostream

//User Libraries 

//Global Constants

//Function Prototypes 

//Execution Begins Here! 
int main(int argc, char** argv) {
    //Header
    cout << "ASCII Codes\n";
    //Loop the ASCII codes.
    for(int i=0;i<=127;i++)
    {
        //Display 16 characters per line
        if (i%16==0)
            cout<<endl;
        //Output ASCII codes
        cout<<(char)i;
    }
    //Exit stage right!
    return 0;
}