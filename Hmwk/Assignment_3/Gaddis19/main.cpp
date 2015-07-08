/*  
 * File:   main.cpp 
 * Author: Tiffany Ward 
 * Created on July 7, 2015, 8:43 PM 
 * Purpose:  Homework 3 Gaddis 19 
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
    
    //Declare variables
    //wave = Wave length in Meters
    float wave;
     
    //Loop 
    do{ 
        //Prompt for user to input wave length
        cout << "Input the wave length in meters: ";
        cin >> wave;
        
        //Output the spectrum band 
        if     (wave>1e-2 ) cout << wave << "(mtrs) is in the Radio Wave band \n";
        else if(wave>1e-3 ) cout << wave << "(mtrs) is in the Microwave band \n";
        else if(wave>7e-7 ) cout << wave << "(mtrs) is in the Infrared band   \n";
        else if(wave>4e-7 ) cout << wave << "(mtrs) is in the Visible band    \n";
        else if(wave>1e-8 ) cout << wave << "(mtrs) is in the Ultraviolet band\n";
        else if(wave>1e-11) cout << wave << "(mtrs) is in the X-Ray band      \n";
        else                  cout<<wave << "(mtrs) is in the Gamma Ray band  \n";
    }while(wave!=1); 
     
    //Exit stage right! 
    return 0; 
} 
