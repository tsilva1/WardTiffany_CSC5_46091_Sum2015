/*  
 * File:   main.cpp 
 * Author: Tiffany Ward 
 * Created on July 7, 2015, 9:27 PM 
 * Purpose:  Homework 3 Savitch 6
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
    float fibA=1, fibB=1, fibC, terms=10, crud, days; 
     
    //Prompt user to enter initial weight and growth days 
    cout << "Enter initial crud weight (pounds): ";
    cin >> crud;
    cout << "Number of days allowed grow: ";
    cin >> days;

    //Scale the days to the Fibonacci Sequence 
    terms = days / 5 + 1;//Scale by 5 days and start at an term=1; 
     
    //if/else initiation
    if(terms==1){
        cout << "The crud weight after " << days << " days = " << crud 
                << " lbs" << endl;
    }
    else if(terms==2){ 
          cout << "The crud weight after " << days << " days = " << crud 
                << " lbs" <<endl; 
    }
         else{
        
        //Loop and show terms as you generate 
        for(unsigned char term=3;term<=terms;term++){ 
            //Calculate the next term in the sequence 
            fibC = fibA + fibB;
            //Output the current term
            fibA = fibB; 
            fibB = fibC; 
        } 
        cout << "The crud weight after " << days << " days = " 
                << fibC * crud << " lbs" << endl; 
    } 
    //Exit stage right 
    return 0; 
}