/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 14, 2015, 5:19 PM
 * Purpose:  Homework 5 Gaddis 9
 */

//System Libraries
#include <iostream>// File I/O
#include <iomanip>//set precision
#include <math.h>//elevate to the power
using namespace std;// std namespace ->iostream

//User Libraries

//Global Constants

//Function Prototypes
float presentValue (float, float, int);
//Execution Begins Here!

int main(int argc, char** argv) {
   //Declare variables Here
    float Fut=0.0f;//future value
    float rate=0.0f;//interest rate
    int n=0;// number of years
    float P=0;//beginning of equation
    
    //Initialize values
    cout<<"Money you want to save: $";
    cin>>Fut;
    cout<<"Enter interest rate: ";
    cin>>rate;
    cout<<"Enter number of years you want to be saving: ";
    cin>>n;
    
    //Process Inputs Here
    P=presentValue(Fut,rate,n);
    
    //Outputs Unknown Here
    cout<<"To save $"<<Fut<<" you need a deposit of $"<<P<<endl;
    
    //Exit stage Right!
    

    return 0;
}

float presentValue(float Fut, float rate, int n)
{
    cout<<setprecision(2)<<fixed;
    float P;
    P=Fut/(pow(1+(rate*0.01),n));
    return P;
}
