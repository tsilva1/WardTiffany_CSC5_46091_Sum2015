/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 12, 2015, 11:11 PM
 * Purpose:  Homework 4 Gaddis 3
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
    cout << "Year       Ocean Level\n";
    //Loop the ASCII codes.
    for(int year=1;year<=25;year++)
    {
        float mmrise=1.5;
        mmrise*=year;
        //Output ASCII codes
        cout<<fixed<<showpoint<<setprecision(1);
        cout<<setw(3)<<year<<setw(14)<<mmrise<<" mm"<<endl;
    }
    //Exit stage right!
    return 0;
}