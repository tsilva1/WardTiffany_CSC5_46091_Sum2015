/* 
 * File:   main.cpp
 * Author: Tiffany Ward
 * Created on June 23, 2015, 11:50 PM
 * Edited on June 24, 2015, 8:09 PM
 * Purpose:  Lab 2 Military Budget
 */

//System Libraries
#include <iostream>  //File I/O
using namespace std; //std namespace -> iostream

//User Libraries

//Global constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables Here
    //federal = Federal Budget
    //military = Military Spending
    //percent = Military budget in percent
    float federal,military,percent;
    //Input Values Here
    military=606e9f; //Units = $
    federal=3.8e12f; //Units = $
    //Process Input Here
    percent = (military/federal)*100; //Units = %
    //Output Unknowns Here
    cout<<"Federal Budget = $"<<federal<<endl;
    cout<<"Military Budget = $"<<military<<endl;
    cout<<"Military Spending Percentage  = "<<percent<<"%"<<endl;
    //Exit Stage Right!
    return 0;
}