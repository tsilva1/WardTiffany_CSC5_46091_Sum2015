/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 13, 2015, 2:01 AM
 * Purpose:  Homework 4 Savitch 2
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
    
    //Declare and initialize variables
    float height, weight, age; //to be entered by user
    float hat, jacket, waist;//clothing sizes to be calculated
    //Prompt user to input height, weight, and age
    cout<<"Please enter height in inches, weight in pounds, and age in years\n";
    cout<<"Height: ";
    cin>>height;
    cout<<"Weight: ";
    cin>>weight;
    cout<<"Age: ";
    cin>>age;
    //Calculate sizes
    hat=weight/height*2.9;
    jacket=height*weight/288+((age>30?:(age-30)/10)*0.125);
    waist=(weight/5.7)+(age>28?:((age-28)/2)*(1/10));
    //Output results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Your hat size is: "<<hat<<" inches.\n";
    cout<<"Your jacket size is: "<<jacket<<" inches.\n";
    cout<<"Your waist size is: "<<waist<<" inches.\n";
    //Exit Stage Right
    return 0;
}