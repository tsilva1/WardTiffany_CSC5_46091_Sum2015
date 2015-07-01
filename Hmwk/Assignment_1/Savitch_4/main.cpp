/* 
 * File:   main.cpp
 * Author: Tiffany Ward
 * Created on June 27, 2015, 11:26 PM
 * Purpose:  Homework 1 Savitch 4
 */

//System Libraries
#include <iostream> //I/O Library
using namespace std;//Namespace for iostream

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    //dstnce=The distance dropped in (ft)
    //time=Time in (secs)
    float dstnce, time;
    //Prompt then Input the time
    cout<<"To calculate the Distance Dropped"<<endl;
    cout<<"Input the Time in Seconds"<<endl;
    cout<<"Time should be in floating point format"<<endl;
    cin>>time;
    //Calculate the free-fall distance
    //dstnce=1.0f/2*3.2174e1f (gravity)*time*time;
    dstnce=3.2174e1f*time*time/2;
    //Output the results
    cout<<"The distance traveled = ";
    cout<<dstnce<<"(ft)"<<endl;
    //Exit stage right!
    return 0;
}