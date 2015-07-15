/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 7, 2015, 10:24 PM
 * Purpose:  Homework 4 Savitch 2A
 */ 

//System Libraries 
#include <iostream>  //I/O Library
#include <iomanip> 
using namespace std; //std namespace -> iostream

//User Libraries 

//Global Constants 
const float lit_gal=.264179;

//Function Prototypes 

//Execution Begins Here! 
int main(int argc, char** argv) { 
    //Declare and initialize variables 
    float ltrONE; //Liters of gas consumed for vehicle one
    float milONE; //miles driven vehicle one
    float galONE; //gallons of gas vehicle one
    float mpgONE; //miles per gallon vehicle one
    float ltrTWO; //Liters of gas consumer for vehicle two
    float milTWO; //miles driven vehicle two
    float galTWO; //gallons of gas vehicle two
    float mpgTWO; //miles per gallon vehicle two
    char ans;
    do
    {
        //Prompt user to enter liters consumed and miles driven 
        cout<<"Please enter the details for vehicle one.\n";
        cout<<"Enter number of liters of gasoline consumed by vehicle one: ";
        cin>>ltrONE;
        cout<<"Enter number of miles traveled: ";
        cin>>milONE;
        cout<<endl;
        cout<<"Now please enter the details for vehicle two.\n";
        cout<<"Enter number of liters of gasoline consumed by vehicle two: ";
        cin>>ltrTWO;
        cout<<"Enter number of miles traveled: ";
        cin>>milTWO;
        cout<<endl;
        //Covert liters to gallons
        galONE=ltrONE*lit_gal;//vehicle one
        galTWO=ltrTWO*lit_gal;//vehicle two
    
        //Calculate miles per gallon
        mpgONE=milONE/galONE;//vehicle one
        mpgTWO=milTWO/galTWO;//vehicle two
        
        //Output mpg for vehicle one
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"The miles per gallon for vehicle one are "<<mpgONE<<" mpg.\n";
        cout << endl;
        //Output mpg for vehicle two
        cout<<"The miles per gallon for vehicle two are "<<mpgTWO<<" mpg.\n";
        cout << endl;
        //Output loop: which vehicle has better fuel efficiency.
        if (mpgONE>mpgTWO){
            cout<<"-Vehicle one has the best fuel efficiency!\n";
            cout<<endl;
        }else{cout<<"-Vehicle two has the best fuel efficiency!\n";
              cout<<endl;
        }
        //Give user option to enter new liters and miles
        cout << "Would you like to try again? (y/n): ";
        cin >> ans;
    }
    while (ans == 'y'||ans == 'Y');
    //Output if users choose to end program
    cout<<endl;
    cout<<"Good-Bye\n";
    //Exit Stage Right
return 0;
}