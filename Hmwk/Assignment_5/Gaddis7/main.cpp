/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 14, 2015, 4:46 PM
 * Purpose:  Homework 5 Gaddis 7
 */

//System Libraries
#include <iostream>// File I/O
#include <iomanip>//set precision
using namespace std;// std namespace ->iostream

//User Libraries

//Global Constants

//Function Prototypes
float celsius (float f);//celsius chart

//Execution Begins Here!

int main(int argc, char** argv) {
   //Declare variables Here
    float c=0.0f;//celsius begininng
   
    //Outputs Unknown Here
    cout<<"Displaying Celsius temperature from o to 20 F "<<endl;
    
    //initialize values here
    for(int i=0; i<33; i++)
    {
        c= celsius(i);
        cout<<i<<" degrees of Fahrenheit equals to "<<setprecision(2)<<fixed<<c<<"degrees of celsius"<<endl;
        
    }
    
    //Exit stage Right!
    

    return 0;
}

float celsius (float f)
{
    float c=0.0f;
    c=(5.0/9)*(f-32);//conversion from celsius to fahrenheit
    
    return c;
}
