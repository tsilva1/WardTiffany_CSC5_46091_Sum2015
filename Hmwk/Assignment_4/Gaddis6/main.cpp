/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 13, 2015, 1:21 AM
 * Purpose:  Homework 4 Gaddis 6
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
    //Declare variables here
    int speed; //speed of vehicles in mph
    int hours; //hours vehicle traveled
    int dist; //distance=speed*hours
    //Prompt and have user enter speed (mph) and hours
    cout<<"What is the speed of the vehicle in mph?: ";
    cin>>speed;
    cout<<"How many hours has it traveled?: ";
    cin>>hours;
    cout<<endl;
    //Check if hours are > 1 and speed is > 0
    //Else display error message
    if (hours<1||speed<0){
        cout<<"ERROR: Hours entered must be greater than 1.\n";
        cout<<"       Speed must be a positive number\n";
        cout<<"       PLEASE TRY AGAIN\n";
        return 1;
    }else
        //Header
        cout<<"Hour      Distance Traveled\n";
        cout<<"___________________________\n";
        //Loop for membership rate increase
        //Year 1 to 6
        //Rate increase of 4% each year
        for(int i=1;i<=hours;i++)
        {
            dist=speed*i;
            //Output new rate for the next 6 years
            cout<<setw(3)<<i<<setw(16)<<dist<<endl;
        }
//Exit stage right!
return 0;
}