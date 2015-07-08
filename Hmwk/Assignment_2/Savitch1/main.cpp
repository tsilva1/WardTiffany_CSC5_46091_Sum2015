/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 7, 2015, 2:10 AM
 * Purpose: Homework 2 Savitch 1
 */ 

//System Libraries
#include <iostream>  //I/O Library
using namespace std; //std namespace -> iostream 

//User Libraries 

//Global Constants 
const float GM_LBS=454;//Grams per pound 

//Function Prototypes 

//Execution Begins Here! 
int main(int argc, char** argv) { 
    //Declare variables
    //swtnr = concentration of sweetener
    const float SWTNR=0.001f;
    //coke = weight of coke (in grams)
    //swmouse = grams of sweetener that kills a mouse
    //wtmouse = weight of mouse (in grams)
    //weight = weight of user
    //cans = consuming this many cans will cause death
    float coke=350, swmouse=5, wtmouse=35, weight, a, cans;
    
    //Prompt user to enter weight
    cout << "Please input your weight (in pounds): ";
    cin >> weight;
    
    //Convert weight to grams
    weight *= GM_LBS;
    
    //Calculate cans consumed that will cause death
    a = swmouse / wtmouse * weight; 
    cans = a / coke / SWTNR;
    
    //Output results 
    cout<<"Consuming " << cans << " cans of diet soda will kill you!";
    
    //Exit Stage Right! 
    return 0; 
} 
