/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 14, 2015, 4:15 PM
 * Purpose:  Homework 5 Gaddis 5
 */

//System Libraries
#include <iostream>// File I/O
#include <math.h>//for powering
using namespace std;// std namespace ->iostream

//User Libraries

//Global Constants
const float g=9.8;//GRAVITY

//Function Prototypes
float fallingDistance(int t=0);

//Execution Begins Here!

int main(int argc, char** argv) {
   //Declare variables Here
    int t=0;//time
    float d=0;//distance
    
    //Initialize values here
    cout<<"Calculating the distance object is falling in 10 seconds\n";
    for (int i=1; i<=10; i++)
    {
        d=fallingDistance(i);
        cout<<i<<" seconds "<<d<<" meters."<<endl;
    }
    //Outputs Unknown Here
    
    //Exit stage Right!
    
    return 0;
}
float fallingDistance(int t)
{
    float d=0;
    const float g=9.8;
    
    d=(0.5*g)*(pow(t,2));
    
    return d;
}


