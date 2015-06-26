/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 23, 2015, 12:57 PM
 * Purpose:  Homework, Energy Drinkers
 */

//System Libraries
#include <iostream> //I/O Library
using namespace std;//Namespace for iostream

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    unsigned short cSurv=12467;//Number of customers surveyed
    unsigned short nEDrnks;    //Number of customers drinking 1 or more energy drinks per week
    unsigned short nCDrnks;    //Number of energy drinkers that prefer citrus flavor
    float pEDrnks=0.14f;  //Percentage surveyed that prefer energy drinks
    float pCDrnks=0.64f;  //Percentage of energy drinkers that prefer citrus flavor
    //Calculate the number of Drinkers
    nEDrnks=static_cast<int>(cSurv*pEDrnks);
    nCDrnks=static_cast<int>(nEDrnks*pCDrnks);
    //Output the results
    cout<<"Number of Energy Drinkers = "<<nEDrnks<<endl;
    cout<<"Number of Citrus Drinkers = "<<nCDrnks<<endl;
    return 0;
}