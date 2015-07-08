/* 
 * File:   main.cpp
 * Author: Tiffany Ward
 * Created on July 7, 2015, 1:23 AM
 * Purpose: Homework 2 Savitch 13
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std; //std namespace -> iostream

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare variables
    unsigned short weight, height, age, bmr;
    unsigned char  candy, cals=230;
    char sex;
    
    //Prompt user for their sex, weight, height, and age.
    cout << "Please enter the following information:\n";
    cout << "Sex (m/f): ";
    cin >> sex;
    cout << "Weight (in pounds): ";
    cin >> weight;
    cout << "Height (in inches): ";
    cin >> height;
    cout << "Age (in years): ";
    cin >> age;
        //if/else male/female calculations
        if(sex=='F'||sex=='f'){
            bmr = 655 + 4.3 * weight + 4.7 * height - 4.7 * age;
        }else{
            bmr = 66 + 6.3 * weight + 12.9 * height - 6.8 * age;
        }
        //Calculate number of chocolate bars that can be eaten
        candy = bmr / cals;
        
        //Output the results
        cout << endl;
        cout << "Your BMR = " << bmr << "(cal)" << endl;
        cout << "Number of candy bars you may consume = "
                <<static_cast<int>(candy) << endl;
        cout << endl << endl;
    
    //Exit stage right!
    return 0;
}