/* 
 * File:   main.cpp
 * Author: Tiffany Ward
 * Created on June 28, 2015, 12:27 AM
 * Purpose:  Homework 1 Gaddis 18
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
    unsigned short cSurv=12467;//Number of people surveyed
    unsigned short nEDrnks;    //Number of those surveyed who consume 1 or more energy drinks per week
    unsigned short nCDrnks;    //Number of energy drinker who prefer citrus flavor
    unsigned char pEDrnks=14;  //The percentage of those surveyed who consume energy drinks
    unsigned char pCDrnks=64;  //The percentage of energy drinkers who prefer citrus flavor
    //Calculate the number of energy drinkers out of the total surveyed
    nEDrnks=cSurv*pEDrnks/100;
    //Calculate the number of those who prefer citrus drinks out of those who consume energy drinks
    nCDrnks=nEDrnks*pCDrnks/100;
    //Output the results
    cout<<"Number of Energy Drinkers = "<<nEDrnks<<endl;
    cout<<"Number of Citrus Drinkers = "<<nCDrnks<<endl;
    return 0;
}